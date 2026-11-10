/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c3310; name: FUN_027c3310
 */


void FUN_027c3310(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined8 **ppuStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  
  local_90 = *param_2;
  uStack_88 = param_2[1];
  local_80 = param_2[2];
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (*(char *)(param_2 + 3) != '\0') {
    local_b8 = 0;
    local_c0 = (undefined8 *)0x0;
    puVar10 = &DAT_cbf29ce484222645;
    snprintf((char *)&local_c0,9,"%08u",(ulong)*(uint *)((long)param_2 + 0x1c));
    if ((byte)local_c0 != 0) {
      pbVar8 = (byte *)((ulong)&local_c0 | 1);
      bVar2 = (byte)local_c0;
      do {
        puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 != 0);
    }
    local_a0 = 8;
    local_98 = (long *)0x0;
    local_b0 = puVar10;
    ppuStack_a8 = &local_c0;
    FUN_02da2fb8(&local_90,&local_b0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  FUN_02728988(&local_c0);
  if (local_c0 != (undefined8 *)0x0) {
    plVar7 = (long *)FUN_0120ccf0();
    puVar5 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_c0 + 1);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = *puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x50))(param_1,plVar7,&local_90);
      return;
    }
  }
  local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffff00000000);
  local_e0 = 0xfc69190f356221af;
  pcStack_d8 = "SessionInstanceNotFound";
  local_d0 = 0x17;
  local_c8 = (long *)0x0;
  FUN_02728d78(param_1,&local_e0,&local_c0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


