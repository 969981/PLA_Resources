/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bd270; name: FUN_013bd270
 */


void FUN_013bd270(undefined1 *param_1,char param_2,int param_3,uint param_4)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long local_78 [2];
  long *local_68;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e656d0(local_78);
  if (local_78[0] != 0) {
    FUN_00b1e8cc(&local_68);
    if (local_78[0] != 0) {
      FUN_02a43934();
    }
    if (local_68 != (long *)0x0) {
      if ((param_4 & 1) == 0) {
        piVar6 = (int *)FUN_00b1e15c(local_68);
      }
      else {
        piVar6 = (int *)FUN_00b1e13c();
      }
      if (((piVar6 != (int *)0x0) && (4 < *(ushort *)((long)piVar6 - (long)*piVar6))) &&
         (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar7 != 0)) {
        uVar10 = (ulong)*(uint *)((long)piVar6 + uVar7);
        uVar8 = (ulong)*(uint *)((long)((long)piVar6 + uVar7) + uVar10);
        if (uVar8 != 0) {
          lVar1 = uVar10 + uVar7;
          lVar13 = 0;
          do {
            uVar12 = (ulong)*(uint *)((long)piVar6 + lVar13 + lVar1 + 4);
            cVar4 = FUN_01360500((long)piVar6 + lVar13 + uVar12 + lVar1 + 4);
            if (cVar4 == param_2) {
              lVar3 = lVar13 + (uVar12 - (long)*(int *)((long)piVar6 + lVar13 + uVar12 + lVar1 + 4))
                               + lVar1;
              uVar2 = *(ushort *)((long)piVar6 + lVar3 + 4);
              if ((uVar2 < 0x15) ||
                 (uVar11 = (ulong)*(ushort *)((long)piVar6 + lVar3 + 0x18), uVar11 == 0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)((long)piVar6 + lVar13 + uVar12 + uVar11 + lVar1 + 4);
              }
              if (iVar5 == param_3) {
                if (uVar2 < 0xb) {
                  uVar9 = 0;
                }
                else {
                  uVar8 = (ulong)*(ushort *)((long)piVar6 + lVar3 + 0xe);
                  uVar9 = 0;
                  if (uVar8 != 0) {
                    uVar9 = *(undefined8 *)
                             ((long)piVar6 + lVar13 + uVar8 + uVar12 + uVar7 + uVar10 + 4);
                  }
                }
                *(undefined8 *)(param_1 + 8) = uVar9;
                *param_1 = 1;
                goto LAB_013bd444;
              }
            }
            lVar13 = lVar13 + 4;
          } while (uVar8 * 4 != lVar13);
        }
      }
      *param_1 = 0;
LAB_013bd444:
      uVar7 = FUN_02a43a5c(local_68[0xb]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      (**(code **)(*local_68 + 0x20))(local_68);
      return;
    }
  }
  *param_1 = 0;
  return;
}


