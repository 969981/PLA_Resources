/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003201a0; name: FUN_003201a0
 */


void FUN_003201a0(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar1 = *param_2;
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    if ((long)uVar3 < 0) {
                    /* try { // try from 003201d8 to 003201f7 has its CatchHandler @ 00320204 */
      FUN_0031f284(uVar3,"size_t to int conversion");
    }
  }
  FUN_0031fe80(pbVar2,uVar3,param_1);
  return;
}


