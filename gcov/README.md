# aitool
## Compile with cmake
mkdir build
cd build
cmake ..

## Show .gcno files
find ./ -name "*.gcno"

## Run
./gcno_test

## Show coverage rate
gcov ./CMakeFiles/gcov_test.dir/main.cc.gcno
gcov ./CMakeFiles/gcov_test.dir/gcov_test.cc.gcno

cat main.cc.gcov
cat gcov_test.cc.gcov

## Generate html file
```
// 初始化 lcov，收集所有生成的覆盖率文件，-c 捕获，-i 初始化，-d 应用目录，-o 输出文件名称
lcov -c -d ./ -o cover.info
// 合并覆盖率文件，-a 合并文件
lcov -a cover.info  -o total.info
// 移除不需要关注的文件目录，如标准库文件
lcov --remove total.info '*/usr/include/*' '*/usr/lib/*' '*/usr/lib64/*' '*/usr/local/include/*' '*/usr/local/lib/*' '*/usr/local/lib64/*' -o final.info
// 生成 html 文件
// 获取 git 的commit id
// commit_id=$(git log | head -n1 | awk '{print $2}')
// 加上项目名称和commit id
// genhtml -o cover_report --legend --title "${project_name} commit SHA1:${commit_id}" --prefix=./ final.info
// -o 生成的html及相关文件的目录名称，--legend 简单的统计信息说明
// --title 项目名称，--prefix 将要生成的html文件的路径
genhtml -o cover_report --legend --title "lcov" --prefix=./ final.info
```
