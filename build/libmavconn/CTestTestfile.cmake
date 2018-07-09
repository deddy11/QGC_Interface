# CMake generated Testfile for 
# Source directory: /home/deddy/QGCInterface/src/mavros/libmavconn
# Build directory: /home/deddy/QGCInterface/build/libmavconn
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_libmavconn_gtest_mavconn-test "/home/deddy/QGCInterface/build/libmavconn/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/deddy/QGCInterface/build/libmavconn/test_results/libmavconn/gtest-mavconn-test.xml" "--return-code" "/home/deddy/QGCInterface/devel/.private/libmavconn/lib/libmavconn/mavconn-test --gtest_output=xml:/home/deddy/QGCInterface/build/libmavconn/test_results/libmavconn/gtest-mavconn-test.xml")
subdirs(gtest)
