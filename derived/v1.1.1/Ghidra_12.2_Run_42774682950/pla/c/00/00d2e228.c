/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e228; name: FUN_00d2e228
 */


bool FUN_00d2e228(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  undefined8 uStack_38;
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_40 = strlen((char *)param_2);
  bVar1 = *param_2;
  local_50 = &DAT_cbf29ce484222645;
  pbVar3 = param_2;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  }
  uStack_38 = 0;
  lVar2 = *(long *)(param_1 + 0x148);
  if (lVar2 != 0) {
    pbStack_48 = param_2;
    FUN_0283b430(lVar2,&local_50);
  }
  return lVar2 != 0;
}


