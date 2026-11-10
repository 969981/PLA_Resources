/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d8948; name: FUN_006d8948
 */


void FUN_006d8948(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar3 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x118,8);
  puVar2 = PTR_DAT_043761a8;
  lVar4 = *param_2;
  plVar3[2] = 0;
  plVar3[3] = lVar4;
  puVar1 = PTR_DAT_04376190;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0;
  local_80 = *param_3;
  plVar5 = plVar3 + 4;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar3[5] = local_80;
  local_78 = 1;
  uStack_68 = param_4[1];
  local_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  local_50 = param_4[4];
  uStack_38 = param_4[7];
  uStack_40 = param_4[6];
  FUN_006172f4(plVar3 + 6,&local_80);
  plVar6 = (long *)plVar3[5];
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x58,8);
  local_78 = local_78 & 0xffffffff00000000;
  local_70 = 0;
  local_80 = DAT_0388a688;
                    /* try { // try from 006d8a10 to 006d8a17 has its CatchHandler @ 006d8a40 */
  FUN_002b8b20(lVar4,&local_80);
  plVar3[0x1f] = lVar4;
  plVar3[0x20] = (long)plVar6;
  plVar3[0x21] = 0;
  plVar3[0x22] = 0;
  FUN_006d7e44(plVar5);
  *param_1 = plVar5;
  param_1[1] = plVar3;
  return;
}


