/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2dabc; name: FUN_02c2dabc
 */


void FUN_02c2dabc(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  long *plVar7;
  long lVar8;
  ushort *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 local_80;
  ushort local_78;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar8 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = param_3;
  *param_1 = (long)&PTR_LAB_04289dd0;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_04289e08;
  param_1[0xb] = 0;
  param_1[0xc] = (long)&DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = (long)&DAT_03996322;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_0437a510 + 0x10;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = (long)puVar1;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_0437a508;
  local_78 = 0;
  local_80 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = PTR_DAT_0437a508 + 0x10;
  local_68 = 0;
  FUN_00938764(&local_70,0,param_2,0,param_1[1],0);
  if ((local_68 == 0) || (*(long *)(local_68 + 0x240) == 0)) {
    uVar11 = 0;
  }
  else {
    puVar9 = *(ushort **)(local_68 + 0x250);
    uVar11 = (ulong)*puVar9;
    local_80 = *(undefined8 *)(puVar9 + 1);
    local_78 = puVar9[5];
  }
  FUN_00936104(&local_70);
  puVar6 = (undefined2 *)
           (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],uVar11 * 4 + 0xc,8);
  if (puVar6 != (undefined2 *)0x0) {
    *puVar6 = (short)uVar11;
    *(undefined8 *)(puVar6 + 1) = local_80;
    local_70 = puVar1 + 0x10;
    puVar6[5] = local_78;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    FUN_00938764(&local_70,0,param_2,0,param_1[1],0);
    if ((local_68 != 0) && (*(long *)(local_68 + 0x240) != 0)) {
      memcpy(puVar6 + 6,(void *)(*(long *)(local_68 + 0x250) + 0xc),uVar11 * 4);
    }
    FUN_00936104(&local_70);
  }
  param_1[0x12] = (long)puVar6;
  plVar10 = (long *)*param_2;
  plVar2 = param_1 + 0xb;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar7 = (long *)*plVar2;
  *plVar2 = (long)plVar10;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  param_1[0xc] = param_2[1];
  param_1[0xd] = param_2[2];
  param_1[0xe] = param_2[3];
  plVar10 = (long *)param_2[4];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar7 = (long *)param_1[0xf];
  param_1[0xf] = (long)plVar10;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 5);
  uVar3 = DAT_043f21e0;
  if (*(ushort *)param_1[0x12] <= DAT_043f21e0) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x11) = uVar3;
  if (*(int *)((long)param_1 + 0x54) == 0) {
    param_1[0x13] = 0;
    return;
  }
  lVar5 = (**(code **)(*(long *)param_1[1] + 0x10))
                    ((long *)param_1[1],*(undefined4 *)((ushort *)param_1[0x12] + 2),8);
  param_1[0x13] = lVar5;
  FUN_02c2df98(param_1,param_1 + 0x13,param_1[0x12],plVar2,(int)param_1[0x11]);
  return;
}


