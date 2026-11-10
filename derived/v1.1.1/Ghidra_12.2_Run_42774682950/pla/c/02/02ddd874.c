/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ddd874; name: FUN_02ddd874
 */


/* WARNING: Removing unreachable block (ram,0x02ddda8c) */
/* WARNING: Removing unreachable block (ram,0x02ddda90) */
/* WARNING: Removing unreachable block (ram,0x02ddda98) */
/* WARNING: Removing unreachable block (ram,0x02dddaa0) */
/* WARNING: Removing unreachable block (ram,0x02dddb28) */

void FUN_02ddd874(long param_1,uint param_2,long *param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  ulong local_b8 [4];
  long *local_98;
  long *local_90;
  char local_88 [32];
  long *local_68;
  
  lVar12 = *(long *)(param_1 + 0x110);
  lVar11 = (long)(int)param_2;
  lVar8 = *(long *)(*param_3 + 0x58);
  lVar9 = lVar12 + (long)param_4 * 0x450 + 0x70;
  local_88[0] = '\0';
  if (param_2 == 0) {
    FUN_00befc74(&local_90,lVar9);
  }
  else {
    local_b8[0] = CONCAT62(local_b8[0]._2_6_,0x30);
    local_b8[0] = CONCAT71(local_b8[0]._1_7_,(char)param_2 + '0');
    FUN_02aa666c(&local_90,lVar9,&DAT_04280a70,local_b8);
  }
  plVar6 = (long *)(lVar8 + lVar11 * 0x38);
  lVar9 = *plVar6;
  lVar8 = plVar6[1];
  if (lVar9 != lVar8) {
    lVar7 = (long)param_4;
    do {
      plVar6 = local_90;
      lVar10 = *param_3;
      if (local_90 == (long *)0x0) {
        local_d8 = *(long *)PTR_DAT_04379c88;
LAB_02ddda10:
        lStack_d0 = *(long *)PTR_PTR_04379d00;
        if (local_90 != (long *)0x0) goto LAB_02ddd950;
LAB_02ddda20:
        local_c8 = 0;
      }
      else {
        local_d8 = local_90[0xb];
        if (local_90 == (long *)0x0) goto LAB_02ddda10;
        lStack_d0 = local_90[0xc];
        if (local_90 == (long *)0x0) goto LAB_02ddda20;
LAB_02ddd950:
        local_c8 = local_90[0xd];
        local_c0 = (long *)0x0;
        (**(code **)(*local_90 + 0x18))(local_90);
      }
      lVar5 = DAT_043ef5a0;
      local_c0 = plVar6;
      plVar6 = (long *)FUN_02aa6448(lVar10,lVar9,param_2);
      if (*plVar6 == 0) {
        local_b8[0] = local_b8[0] & 0xffffffffffffff00;
      }
      else {
        FUN_02b168fc(local_b8,*plVar6,lVar5 + 0x60,&local_d8,lVar12 + lVar7 * 0x450 + 0x90);
      }
      FUN_01f0baf4(local_88,local_b8);
      if ((char)local_b8[0] != '\0') {
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        local_b8[0] = local_b8[0] & 0xffffffffffffff00;
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      if (local_88[0] != '\0') {
        FUN_02b3365c(local_b8,*(undefined8 *)(DAT_043ef5a0 + 0x60),local_88);
        lVar9 = *(long *)(lVar12 + lVar7 * 0x450 + 0xb0);
        plVar6 = *(long **)(lVar9 + lVar11 * 8);
        *(undefined8 *)(lVar9 + lVar11 * 8) = 0;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        *(ulong *)(lVar9 + lVar11 * 8) = local_b8[0];
        local_b8[0] = 0;
        lVar9 = *(long *)(param_1 + 0x110) + lVar7 * 0x450;
        *(byte *)(lVar9 + 0x1e4) = *(byte *)(lVar9 + 0x1e4) | (byte)(1 << (ulong)(param_2 & 0x1f));
        break;
      }
      lVar9 = lVar9 + 8;
    } while (lVar8 != lVar9);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if ((local_88[0] != '\0') && (local_68 != (long *)0x0)) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


