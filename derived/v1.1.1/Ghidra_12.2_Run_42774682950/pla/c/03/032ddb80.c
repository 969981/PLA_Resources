/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ddb80; name: FUN_032ddb80
 */


bool FUN_032ddb80(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    DataMemoryBarrier(2,1);
    uVar1 = (uint)*(ulong *)*param_2;
    if (((DAT_0444a260 & 1) == 0) || ((((uint)*(ulong *)*param_1 ^ uVar1) & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  iVar2 = (int)(*(ulong *)*param_1 >> 0x11);
  return iVar2 <= (int)(uVar1 >> 2 & 0x7fff) && (int)(*(ulong *)*param_2 >> 0x11) <= iVar2;
}


