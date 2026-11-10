/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a03374; name: FUN_00a03374
 */


void FUN_00a03374(long *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  ushort *puVar10;
  undefined1 local_34 [4];
  undefined8 local_30;
  ulong uStack_28;
  long local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar10 = (ushort *)((long)param_2 - (long)*param_2);
  uVar5 = *puVar10;
  if (uVar5 < 5) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    if ((ulong)puVar10[2] != 0) {
      local_14 = *(undefined4 *)((long)param_2 + (ulong)puVar10[2]);
    }
    if (6 < uVar5) {
      local_18 = 0;
      if ((ulong)puVar10[3] != 0) {
        local_18 = *(undefined4 *)((long)param_2 + (ulong)puVar10[3]);
      }
      if (8 < uVar5) {
        local_20 = 0;
        if ((ulong)puVar10[4] != 0) {
          puVar2 = (uint *)((long)param_2 + (ulong)puVar10[4]);
          local_20 = (long)puVar2 + (ulong)*puVar2;
        }
        puVar3 = (undefined4 *)((long)param_2 + (ulong)puVar10[5]);
        puVar4 = (undefined4 *)0x0;
        if (puVar10[5] != 0) {
          puVar4 = puVar3;
        }
        local_30 = CONCAT44(puVar4[1],*puVar3);
        uStack_28 = (ulong)(uint)puVar3[2];
        if (uVar5 < 0xd) {
          local_34[0] = false;
        }
        else {
          local_34[0] = false;
          if ((ulong)puVar10[6] != 0) {
            local_34[0] = *(char *)((long)param_2 + (ulong)puVar10[6]) != '\0';
          }
        }
        FUN_00a03464(param_3,&local_14,&local_18,&local_20,&local_30,local_34);
        return;
      }
      goto code_r0x00a03464;
    }
  }
  local_18 = 0;
code_r0x00a03464:
  lVar8 = FUN_00a193a8();
  *param_1 = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  return;
}


