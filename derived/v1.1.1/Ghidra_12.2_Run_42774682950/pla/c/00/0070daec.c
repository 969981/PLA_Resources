/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070daec; name: FUN_0070daec
 */


void FUN_0070daec(byte *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  byte local_40;
  undefined7 uStack_3f;
  ulong local_30;
  long *plStack_28;
  
                    /* try { // try from 0070db00 to 0070db07 has its CatchHandler @ 0070dc14 */
  FUN_0071de28(param_2);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x10);
  }
  FUN_002a8590(&local_40,pbVar5,0);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 0070db40 to 0070db47 has its CatchHandler @ 0070dc00 */
  FUN_0070dc18(param_2,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  uVar2 = FUN_006d9e10(param_1 + 0x20);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
    puVar4 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
                    /* try { // try from 0070db8c to 0070dbd3 has its CatchHandler @ 0070dc14 */
    lVar3 = FUN_002e1a14(puVar4);
    *(long *)(param_2 + 0x20) = lVar3;
  }
  FUN_002e1668(lVar3,uVar2);
  if ((param_1[0x28] & 1) == 0) {
    pbVar5 = param_1 + 0x29;
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x38);
  }
  FUN_0070ddbc(param_2,pbVar5);
  lVar3 = *(long *)(param_2 + 0x28);
  if (lVar3 == 0) {
    puVar4 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar3 = FUN_00724a34(puVar4);
    *(long *)(param_2 + 0x28) = lVar3;
  }
  FUN_006fb1e0(lVar3,param_1 + 0x48);
  return;
}


