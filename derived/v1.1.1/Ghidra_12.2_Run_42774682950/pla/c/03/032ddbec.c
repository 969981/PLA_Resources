/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ddbec; name: FUN_032ddbec
 */


bool FUN_032ddbec(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  while( true ) {
    DataMemoryBarrier(2,1);
    uVar1 = *(ulong *)*param_1 ^ *(ulong *)*param_2;
    if (((DAT_0444a260 & 1) == 0) || ((uVar1 & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  return (int)(*(ulong *)*param_1 >> 0x11) == (int)(*(ulong *)*param_2 >> 0x11) &&
         (uVar1 & 0x1fffc) == 0;
}


