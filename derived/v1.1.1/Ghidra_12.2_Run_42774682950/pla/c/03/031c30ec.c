/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c30ec; name: FUN_031c30ec
 */


void FUN_031c30ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_170 [177];
  undefined1 local_bf;
  long local_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58;
  int local_54;
  
  lVar11 = tpidr_el0;
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x60,0);
  *puVar7 = &PTR_LAB_0430b620;
  puVar7[1] = 0xffffffff;
  puVar7[2] = 1;
  puVar7[3] = 0;
  puVar7[8] = 0xffffffff00000000;
  puVar7[6] = 0x8000000000000000;
  *(undefined4 *)(puVar7 + 9) = 0x7f7fffee;
  *(undefined2 *)((long)puVar7 + 0x4c) = 0;
  puVar7[4] = 0x8000000000000000;
  puVar7[5] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0x8000000000000000;
  plVar6 = *(long **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x28);
  }
  else {
    if (plVar6[1] != 0) {
      plVar1 = plVar6 + 2;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x20);
    plVar6 = *(long **)(param_1 + 0x28);
  }
  if (plVar6 != (long *)0x0) {
    lVar11 = *(long *)(param_1 + 0x18);
    uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,param_1,param_2);
    if ((uVar8 & 1) != 0) {
      FUN_031b078c(auStack_170,0);
      FUN_031b0d28(auStack_170,lVar11);
      local_bf = param_6 != (undefined8 *)0x0;
      local_58 = (int)local_a8;
      if (local_58 < 1) {
        local_58 = 0x20000;
      }
      local_54 = (int)((ulong)local_a8 >> 0x20);
      if (local_54 == 0 || local_a8 < 0) {
        local_54 = 0x90200;
      }
      local_70 = 0;
      uStack_68 = 0;
      FUN_031b1548(param_4,&local_70,&local_58);
      local_90 = *param_4;
      local_88 = param_4[1];
      local_58 = (int)local_a0;
      if (local_58 < 1) {
        local_58 = 0x8000;
      }
      local_54 = (int)((ulong)local_a0 >> 0x20);
      if (local_54 == 0 || local_a0 < 0) {
        local_54 = 0x24200;
      }
      local_70 = 0;
      uStack_68 = 0;
      FUN_031b1548(param_5,&local_70,&local_58);
      local_80 = *param_5;
      local_78 = param_5[1];
      FUN_031b1728(param_2,auStack_170,puVar7);
      puVar5 = PTR_PTR_0434a080;
      if (param_6 != (undefined8 *)0x0) {
        if (puVar7 + 10 != param_6) {
          if (*(int *)((long)param_6 + 0xc) < 0) {
            FUN_032bcf84(PTR_PTR_0434a080,param_6,4);
          }
          if (*(int *)((long)puVar7 + 0x5c) < 0) {
            FUN_032bcf84(puVar5,puVar7 + 10,4);
          }
          uVar10 = *param_6;
          *param_6 = puVar7[10];
          puVar7[10] = uVar10;
          uVar2 = *(undefined4 *)(param_6 + 1);
          *(undefined4 *)(param_6 + 1) = *(undefined4 *)(puVar7 + 0xb);
          *(undefined4 *)(puVar7 + 0xb) = uVar2;
          uVar2 = *(undefined4 *)((long)param_6 + 0xc);
          *(undefined4 *)((long)param_6 + 0xc) = *(undefined4 *)((long)puVar7 + 0x5c);
          *(undefined4 *)((long)puVar7 + 0x5c) = uVar2;
        }
        uVar10 = *(undefined8 *)(lVar11 + 0x90);
        *(undefined4 *)(param_7 + 1) = *(undefined4 *)(lVar11 + 0x98);
        *param_7 = uVar10;
      }
      FUN_031b0988(auStack_170);
      return;
    }
  }
  puVar7[8] = 0xffffffff00000000;
  *(undefined1 *)((long)puVar7 + 0x4c) = 5;
  return;
}


