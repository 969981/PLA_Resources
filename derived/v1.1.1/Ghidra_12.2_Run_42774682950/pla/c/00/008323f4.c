/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008323f4; name: FUN_008323f4
 */


long * FUN_008323f4(long *param_1,undefined8 param_2,char *param_3,undefined4 param_4,int param_5,
                   undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int local_90 [5];
  int local_7c;
  long local_78;
  int local_6c;
  long local_68;
  
  if ((param_1[8] != 0) && ((int)param_1[0xf6] == 0)) {
    uVar1 = param_5 + 0x10;
    uVar3 = (*(int *)((long)param_1 + 0x34) +
            (uint)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) * -2) - 0x1a;
    iVar4 = uVar3 - uVar1;
    if (uVar1 <= uVar3) {
      (**(code **)(*param_1 + 0x88))(param_1);
      FUN_00848d7c(param_1 + 9,param_2,param_5);
      if (((char)param_1[0xfc] != -3) && (*(char *)((long)param_1 + 0x7e1) != -3)) {
        local_68 = 0;
        local_6c = 0;
        local_78 = 0;
        local_7c = 0;
        FUN_0083063c(local_90,*(undefined8 *)PTR_DAT_04377ce8,param_3,&local_68,&local_6c,&local_78,
                     &local_7c);
        if (local_90[0] != 0) {
          return (long *)0x0;
        }
        if (0 < local_6c) {
          lVar6 = 0;
          lVar7 = 0;
          do {
            FUN_0083266c(param_1,local_68 + lVar6,param_4,uVar1,iVar4,param_6,*param_7,
                         *(undefined4 *)(param_7 + 1));
            lVar7 = lVar7 + 1;
            lVar6 = lVar6 + 0x38;
          } while (lVar7 < local_6c);
        }
        if (0 < local_7c) {
          if (*(char *)((long)param_1 + 0x7e3) == '\0') {
            uVar5 = (**(code **)(*(long *)param_1[0xf7] + 0x50))();
            if ((((uVar5 & 1) == 0) || (*param_3 != *PTR_DAT_04377e08)) ||
               (param_3[1] != PTR_DAT_04377e08[1])) {
              if (0 < local_7c) {
                lVar6 = 0;
                lVar7 = 0;
                do {
                  param_3 = (char *)((ulong)param_3 & 0xffffffff00000000 |
                                    (ulong)*(uint *)(param_7 + 1));
                  FUN_0083266c(param_1,local_78 + lVar6,param_4,uVar1,iVar4,param_6,*param_7,param_3
                              );
                  lVar7 = lVar7 + 1;
                  lVar6 = lVar6 + 0x38;
                } while (lVar7 < local_7c);
              }
            }
            else {
              FUN_00832a3c(param_1,param_4,uVar1,iVar4,param_6,*param_7,*(undefined4 *)(param_7 + 1)
                          );
            }
          }
          else {
            FUN_008327f0(param_1,param_3,param_4,uVar1,iVar4,param_6,*param_7,
                         *(undefined4 *)(param_7 + 1));
          }
        }
        plVar2 = (long *)0x0;
        if ((int)param_1[0xf6] != 0) {
          plVar2 = param_1 + 9;
        }
        return plVar2;
      }
    }
  }
  return (long *)0x0;
}


