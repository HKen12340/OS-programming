void io_hlt(void);
// void write_mem8(int addr, int data);

void HariMain(void)
{
	int i;	 /* 変数宣言。iという変数は、32ビットの整数型 */
	char *p; /* pという変数は、BYTE[...]用の番地*/

	p = (char *)0xa0000; /* 番地を代入 */

	for (i = 0; i <= 0xaffff; i++)
	{
		p[i] = i & 0x0f;
		// これでwrite_mem8(i, i & 0x0f);のかわりになる
	}

	for (;;)
	{
		io_hlt();
	}
}
