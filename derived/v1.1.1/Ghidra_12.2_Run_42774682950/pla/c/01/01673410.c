/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01673410; name: FUN_01673410
 */


byte FUN_01673410(long param_1,byte param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auStack_e0 [24];
  long *local_c8;
  long *local_a8;
  long *local_88;
  char local_7c;
  undefined1 *local_68;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar9 = 0;
    do {
      puVar6 = (undefined1 *)0x82f74dc648175484;
      local_68 = (undefined1 *)0x2c76bf417af09da9;
      uVar2 = *(long *)(param_1 + 0xd0) + uVar9;
      plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x98) + (uVar2 >> 6 & 0x3fffffffffffff8)) +
                         (uVar2 & 0x1ff) * 8);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = plVar8[0xb];
      if (lVar7 < 0x466c5dfffa6047de) {
        if (lVar7 < 0x388689e19b68d6f9) {
          if (lVar7 == -0x15f70fc9d835aca1) {
            local_68 = (undefined1 *)0x82c7348d2a2223d8;
          }
          else if (lVar7 == -0x3234e1bb7a429b54) {
            local_68 = (undefined1 *)0xf1c6e8bbc87f3b74;
          }
          else {
            local_68 = &DAT_cbf29ce484222645;
            if (lVar7 == 0x1608695374913ba9) goto LAB_016735c0;
          }
        }
        else {
          if (lVar7 != 0x388689e19b68d6f9) {
            puVar6 = &DAT_cbf29ce484222645;
          }
          local_68 = (undefined1 *)0x1e5f23d6f19e85d9;
          if (lVar7 != 0x4393e4fd10599008) {
            local_68 = puVar6;
          }
        }
      }
      else if (lVar7 == 0x466c5dfffa6047de) {
LAB_016735c0:
        local_68 = (undefined1 *)FUN_01673270(plVar8,0);
      }
      else if (lVar7 != 0x512653c97af7f269) {
        local_68 = &DAT_cbf29ce484222645;
      }
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (local_68 != &DAT_cbf29ce484222645) {
        FUN_01617470(auStack_e0,*(undefined8 *)(param_1 + 0x118),&local_68);
        param_2 = local_7c != '\0';
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x20))();
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulong *)(param_1 + 0xd8));
  }
  return param_2 & 1;
}


