/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03031544; name: FUN_03031544
 */


void FUN_03031544(long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  uint *puVar6;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined2 local_8a0;
  undefined4 local_89c;
  undefined8 local_898;
  undefined3 local_890;
  undefined8 local_880;
  ulong uStack_878;
  undefined8 uStack_870;
  ulong uStack_868;
  uint *local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  ulong uStack_848;
  
  uVar3 = param_2 & 0xffffff;
  if (uVar3 == 0xffffff) {
    uStack_858 = 0xffffffffffffffff;
  }
  else {
    uStack_858 = *(ulong *)(*(long *)(param_1 + 0x38) + uVar3 * 0xc0 + 0xb0);
  }
  local_860 = (uint *)CONCAT26(local_860._6_2_,0x1c02000020);
  local_850 = CONCAT71(local_850._1_7_,(char)param_3);
  plVar2 = *(long **)(param_1 + 0x7f0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_860);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar5 + uVar3 * 0xc0 + 0x88) & 1) != 0) {
    uVar1 = *(uint *)(lVar5 + uVar3 * 0xc0 + 0x54);
    param_2 = param_2 & 0xffffffff;
    if ((uVar1 >> 1 & 1) == 0) {
      if (param_3 == 0) {
        lVar5 = lVar5 + uVar3 * 0xc0;
        uStack_848 = *(ulong *)(lVar5 + 0x68);
        local_850 = *(undefined8 *)(lVar5 + 0x60);
        local_860 = *(uint **)(lVar5 + 0x70);
        uStack_858 = uStack_848 >> 0x20;
        FUN_030317f0(param_1,&local_860,param_2);
      }
      else if (*(long *)(param_1 + 0x698) != 0) {
        local_89c = 0;
        local_860 = (uint *)&local_850;
        local_898 = 0;
        uStack_858 = -0x7ffffe0000000000;
        local_8a0 = 0xffff;
        lVar5 = lVar5 + uVar3 * 0xc0;
        local_8b0 = 0;
        uStack_8a8 = 0;
        uStack_868 = *(ulong *)(lVar5 + 0x68);
        uStack_870 = *(undefined8 *)(lVar5 + 0x60);
        local_880 = *(undefined8 *)(lVar5 + 0x70);
        local_890 = 0x20801;
        uStack_878 = uStack_868 >> 0x20;
        (**(code **)(**(long **)(param_1 + 0x4c0) + 0x78))
                  (*(long **)(param_1 + 0x4c0),&local_8b0,&local_860);
        if ((int)uStack_858 != 0) {
          lVar5 = (long)(int)uStack_858 << 2;
          puVar6 = local_860;
          do {
            if ((*(byte *)(*(long *)(param_1 + 0x38) + ((ulong)*puVar6 & 0xffffff) * 0xc0 + 0x54) &
                9) == 0) {
              FUN_03051388(*(undefined8 *)(param_1 + 0x698),(ulong)*puVar6,0);
            }
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -4;
          } while (lVar5 != 0);
        }
        lVar5 = uStack_858;
        uVar1 = uStack_858._4_4_;
        uStack_858 = (ulong)uStack_858._4_4_ << 0x20;
        if ((-1 < lVar5) && (local_860 != (uint *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_860,uVar1 << 2);
        }
      }
    }
    else if ((uVar1 & 9) == 0) {
      if (param_3 == 0) {
        FUN_03030748(param_1,param_2,0);
      }
      else if (*(long *)(param_1 + 0x698) != 0) {
        FUN_03051388(*(long *)(param_1 + 0x698),param_2,0);
      }
    }
    else if ((*(long *)(param_1 + 0x698) != 0) &&
            (pcVar4 = (char *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) +
                               (long)*(int *)(lVar5 + uVar3 * 0xc0 + 0x80) * 0x20 + 0xb),
            *pcVar4 != -1)) {
      *pcVar4 = '\0';
    }
    FUN_03030ef8(param_1,param_2,param_3);
  }
  return;
}


