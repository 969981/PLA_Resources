/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060a5ac; name: FUN_0060a5ac
 */


void FUN_0060a5ac(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  ulong local_58 [3];
  undefined1 auStack_40 [16];
  
  FUN_002e3de4(param_4,auStack_40);
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = 0;
  pbVar4 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
  }
                    /* try { // try from 0060a5ec to 0060a5fb has its CatchHandler @ 0060a758 */
  uVar3 = FUN_00595070(pbVar4,auStack_40,0);
  puStack_68 = (undefined8 *)param_5[1];
  local_70 = (undefined8 *)*param_5;
  local_60 = param_5[2];
  param_5[2] = 0;
  *param_5 = 0;
  param_5[1] = 0;
                    /* try { // try from 0060a614 to 0060a623 has its CatchHandler @ 0060a6cc */
  FUN_006065d0(param_1,local_58,uVar3,&local_70);
  puVar2 = local_70;
  puVar1 = PTR_LAB_04373088;
  if (local_70 != (undefined8 *)0x0) {
    if (puStack_68 != local_70) {
      puVar6 = puStack_68 + -1;
      puVar5 = (undefined8 *)*puVar6;
      *puVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) goto LAB_0060a660;
      while (puVar2 != puVar6) {
        while( true ) {
          puVar6 = puVar6 + -1;
          puVar5 = (undefined8 *)*puVar6;
          *puVar6 = 0;
          if (puVar5 == (undefined8 *)0x0) break;
LAB_0060a660:
          (**(code **)*puVar5)(puVar5);
          FUN_002e2ea0(puVar1,puVar5);
          if (puVar2 == puVar6) goto LAB_0060a690;
        }
      }
    }
LAB_0060a690:
    puStack_68 = puVar2;
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if ((local_58[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58[2]);
  }
  return;
}


