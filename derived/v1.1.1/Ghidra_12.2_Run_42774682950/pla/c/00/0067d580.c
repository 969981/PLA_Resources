/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067d580; name: FUN_0067d580
 */


void FUN_0067d580(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
                    /* try { // try from 0067d594 to 0067d59f has its CatchHandler @ 0067d634 */
  FUN_0064fdb0(&local_40,param_2,0x2f);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 0067d5b8 to 0067d5bf has its CatchHandler @ 0067d604 */
  puVar3 = (undefined8 *)FUN_002a45d4(&local_40,pbVar2,uVar1);
  uVar4 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


