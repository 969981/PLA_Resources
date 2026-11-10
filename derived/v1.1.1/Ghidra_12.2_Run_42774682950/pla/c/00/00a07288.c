/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a07288; name: FUN_00a07288
 */


void FUN_00a07288(long *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  ushort *puVar9;
  undefined4 local_34;
  undefined8 local_30;
  ulong uStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar9 = (ushort *)((long)param_2 - (long)*param_2);
  uVar4 = *puVar9;
  if (uVar4 < 5) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    if ((ulong)puVar9[2] != 0) {
      local_14 = *(undefined4 *)((long)param_2 + (ulong)puVar9[2]);
    }
    if (6 < uVar4) {
      local_18 = 0;
      if ((ulong)puVar9[3] != 0) {
        local_18 = *(undefined4 *)((long)param_2 + (ulong)puVar9[3]);
      }
      if (8 < uVar4) {
        local_1c = 0;
        if ((ulong)puVar9[4] != 0) {
          local_1c = *(undefined4 *)((long)param_2 + (ulong)puVar9[4]);
        }
        puVar2 = (undefined4 *)((long)param_2 + (ulong)puVar9[5]);
        puVar3 = (undefined4 *)0x0;
        if (puVar9[5] != 0) {
          puVar3 = puVar2;
        }
        local_30 = CONCAT44(puVar3[1],*puVar2);
        uStack_28 = (ulong)(uint)puVar2[2];
        local_34 = 0;
        if ((0xc < uVar4) && ((ulong)puVar9[6] != 0)) {
          local_34 = *(undefined4 *)((long)param_2 + (ulong)puVar9[6]);
        }
        FUN_00a07364(param_3,&local_14,&local_18,&local_1c,&local_30,&local_34);
        return;
      }
      goto code_r0x00a07364;
    }
  }
  local_18 = 0;
code_r0x00a07364:
  lVar7 = FUN_00a1c824();
  *param_1 = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return;
}


