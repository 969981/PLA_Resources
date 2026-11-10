/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a02e34; name: FUN_00a02e34
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a02e34(long *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  ushort *puVar10;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  uint local_58;
  bool local_54 [4];
  bool local_50 [4];
  bool local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar10 = (ushort *)((long)param_2 - (long)*param_2);
  uVar5 = *puVar10;
  if (uVar5 < 5) {
    local_14 = 0;
LAB_00a03060:
    local_44 = 0;
LAB_00a03064:
    local_48 = 0;
LAB_00a03068:
    local_4c[0] = false;
LAB_00a0306c:
    local_50[0] = false;
  }
  else {
    local_14 = 0;
    if ((ulong)puVar10[2] != 0) {
      local_14 = *(undefined4 *)((long)param_2 + (ulong)puVar10[2]);
    }
    if (uVar5 < 7) goto LAB_00a03060;
    local_18 = 0;
    if ((ulong)puVar10[3] != 0) {
      local_18 = *(undefined4 *)((long)param_2 + (ulong)puVar10[3]);
    }
    puVar2 = (undefined4 *)((long)param_2 + (ulong)puVar10[4]);
    puVar4 = (undefined4 *)0x0;
    if (puVar10[4] != 0) {
      puVar4 = puVar2;
    }
    uStack_28 = (ulong)(uint)puVar2[2];
    local_30 = CONCAT44(puVar4[1],*puVar2);
    puVar2 = (undefined4 *)((long)param_2 + (ulong)puVar10[5]);
    puVar4 = (undefined4 *)0x0;
    if (puVar10[5] != 0) {
      puVar4 = puVar2;
    }
    uStack_38 = (ulong)(uint)puVar2[2];
    local_40 = CONCAT44(puVar4[1],*puVar2);
    if (uVar5 < 0xd) goto LAB_00a03060;
    if ((ulong)puVar10[6] == 0) {
      local_44 = 0;
    }
    else {
      local_44 = *(undefined4 *)((long)param_2 + (ulong)puVar10[6]);
    }
    if (uVar5 < 0xf) goto LAB_00a03064;
    local_48 = 0;
    if ((ulong)puVar10[7] != 0) {
      local_48 = *(undefined4 *)((long)param_2 + (ulong)puVar10[7]);
    }
    if (uVar5 < 0x11) goto LAB_00a03068;
    local_4c[0] = false;
    if ((ulong)puVar10[8] != 0) {
      local_4c[0] = *(char *)((long)param_2 + (ulong)puVar10[8]) != '\0';
    }
    if (uVar5 < 0x13) goto LAB_00a0306c;
    local_50[0] = false;
    if ((ulong)puVar10[9] != 0) {
      local_50[0] = *(char *)((long)param_2 + (ulong)puVar10[9]) != '\0';
    }
    if (0x14 < uVar5) {
      local_54[0] = false;
      if ((ulong)puVar10[10] != 0) {
        local_54[0] = *(char *)((long)param_2 + (ulong)puVar10[10]) != '\0';
      }
      if (0x16 < uVar5) {
        local_58 = 0;
        if ((ulong)puVar10[0xb] != 0) {
          local_58 = (uint)*(byte *)((long)param_2 + (ulong)puVar10[0xb]);
        }
        if ((ulong)puVar10[0xc] != 0) {
          pcVar3 = (char *)((long)param_2 + (ulong)puVar10[0xc]);
          local_60 = *pcVar3 != '\0';
          local_5f = pcVar3[1] != '\0';
          local_5e = pcVar3[2] != '\0';
          if ((ulong)puVar10[0xd] != 0) {
            pcVar3 = (char *)((long)param_2 + (ulong)puVar10[0xd]);
            local_68 = *pcVar3 != '\0';
            local_67 = pcVar3[1] != '\0';
            local_66 = pcVar3[2] != '\0';
            FUN_00a03074(param_3,&local_14,&local_18,&local_30,&local_40,&local_44,&local_48,
                         local_4c,local_50,local_54,&local_58,&local_60,&local_68);
            return;
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x00a03074;
    }
  }
  local_54[0] = false;
code_r0x00a03074:
  lVar8 = FUN_00a190a0();
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


