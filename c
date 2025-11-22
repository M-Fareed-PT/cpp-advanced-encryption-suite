cryptotool rsa gen-key -p public.pem -s private.pem
cryptotool rsa encrypt  -p public.pem  -i input.txt  -o out.bin
cryptotool rsa decrypt  -s private.pem -i out.bin    -o plain.txt
cryptotool rsa sign     -s private.pem -i doc.txt    -o sig.bin
cryptotool rsa verify   -p public.pem  -i doc.txt    -s sig.bin
