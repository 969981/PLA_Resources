/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03330988; name: FUN_03330988
 */


void FUN_03330988(long *param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long local_70;
  undefined8 local_68;
  
  puVar4 = PTR_PTR_0434a090;
  local_68 = 0x8000000000000000;
  if (0 < param_3) {
    lVar2 = (long)&local_68 + 4;
    lVar6 = FUN_03339d80(PTR_PTR_0434a090,param_3 << 1,0,0,lVar2);
    local_70 = lVar6;
    do {
      param_3 = param_3 + -1;
      iVar9 = *(int *)(*param_2 + 0x14);
      if (iVar9 != -1) {
        iVar10 = (int)local_68 + 1;
        if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)local_68) {
          lVar6 = FUN_03339d80(puVar4,iVar10,lVar6,local_68 & 0xffffffff,lVar2);
          local_70 = lVar6;
        }
        *(int *)(lVar6 + (long)(int)local_68 * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,iVar10);
      }
      param_2 = (long *)((long)param_2 + (long)param_4);
    } while (0 < param_3);
    if ((int)local_68 != 0) {
      while( true ) {
        lVar6 = (long)*(int *)(lVar6 + ((long)(int)local_68 + -1) * 4);
        iVar9 = (int)((long)(int)local_68 + -1);
        local_68 = CONCAT44(local_68._4_4_,iVar9);
        lVar11 = *param_1;
        if (*(int *)(*(long *)(lVar11 + lVar6 * 0x18) + 0x10) == 0) {
          *(undefined4 *)(*(long *)(*param_1 + lVar6 * 0x18) + 0x10) = 1;
          iVar10 = *(int *)(lVar11 + lVar6 * 0x18 + 8);
          if (iVar10 != -1) {
            lVar7 = local_70;
            do {
              lVar12 = param_1[3];
              uVar3 = *(undefined4 *)(lVar12 + (long)iVar10 * 0x14 + 4);
              iVar1 = iVar9 + 1;
              if ((int)(local_68._4_4_ & 0x3fffffff) <= iVar9) {
                lVar7 = FUN_03339d80(puVar4,iVar1,lVar7,iVar9,lVar2);
                iVar9 = (int)local_68;
                local_70 = lVar7;
              }
              *(undefined4 *)(lVar7 + (long)iVar9 * 4) = uVar3;
              local_68 = CONCAT44(local_68._4_4_,iVar1);
              iVar10 = *(int *)(lVar12 + (long)iVar10 * 0x14 + 0xc);
              iVar9 = iVar1;
            } while (iVar10 != -1);
          }
          for (iVar9 = *(int *)(lVar11 + lVar6 * 0x18 + 0xc); iVar9 != -1;
              iVar9 = *(int *)(lVar6 + (long)iVar9 * 0x14 + 8)) {
            lVar6 = param_1[3];
            iVar10 = *(int *)(lVar6 + (long)iVar9 * 0x14);
            if ((((iVar10 != -1) &&
                 (*(int *)(*(long *)(*param_1 + (long)iVar10 * 0x18) + 0x10) == 0)) &&
                (uVar8 = (**(code **)(**(long **)(*(long *)(*param_1 + (long)iVar10 * 0x18) + 0x58)
                                     + 0x30))(), (uVar8 & 1) != 0)) &&
               (uVar8 = FUN_03339cf4(param_1,iVar10), (uVar8 & 1) != 0)) {
              iVar1 = (int)local_68 + 1;
              if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)local_68) {
                local_70 = FUN_03339d80(puVar4,iVar1,local_70,local_68 & 0xffffffff,lVar2);
              }
              *(int *)(local_70 + (long)(int)local_68 * 4) = iVar10;
              local_68 = CONCAT44(local_68._4_4_,iVar1);
            }
          }
        }
        if ((int)local_68 == 0) break;
        lVar6 = local_70;
      }
    }
    uVar8 = local_68;
    uVar5 = local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < (long)uVar8) && (local_70 != 0)) {
      FUN_032cf244(puVar4,local_70,4,uVar5 & 0x3fffffff);
    }
  }
  return;
}


