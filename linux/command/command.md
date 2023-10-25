## Linux命令记录

* remote diff
    * 功能：将本地服务器的文件跟远程服务器的文件做比较
    * 实现：

        ```
        # remote diff
        function remotediff() {
            if [ $# -ne 2 ]; then
                echo "Usage: remotediff <remote_filename> <local_filename>"
                return 1
            fi

            remote_filename="$1"
            local_filename="$2"

            ssh haonan@remote_IP "cat $remote_filename" | diff - $local_filename
        }
        ```
