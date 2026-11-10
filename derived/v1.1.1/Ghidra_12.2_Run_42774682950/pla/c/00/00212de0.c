/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212de0; name: FUN_00212de0
 */


undefined8 FUN_00212de0(long param_1,uint param_2,char *param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  
  if (param_3 == (char *)0x0) {
    uVar3 = 0xfffffffa;
  }
  else {
    uVar3 = 0xfffffffa;
    if ((param_4 == 0x70) && (*param_3 == '1')) {
      if (param_1 != 0) {
        pcVar5 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        puVar2 = PTR_FUN_04372820;
        if (pcVar5 == (code *)0x0) {
          *(undefined **)(param_1 + 0x40) = PTR_FUN_04372820;
          *(undefined8 *)(param_1 + 0x50) = 0;
          lVar6 = *(long *)(param_1 + 0x48);
          pcVar5 = (code *)puVar2;
        }
        else {
          lVar6 = *(long *)(param_1 + 0x48);
        }
        if (lVar6 == 0) {
          *(undefined **)(param_1 + 0x48) = PTR_LAB_04372828;
        }
        plVar4 = (long *)(*pcVar5)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
        if (plVar4 == (long *)0x0) {
          return 0xfffffffc;
        }
        *(long **)(param_1 + 0x38) = plVar4;
        *plVar4 = param_1;
        plVar4[9] = 0;
        *(undefined4 *)(plVar4 + 1) = 0x3f34;
        if ((((*(long *)(param_1 + 0x40) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) &&
            (plVar7 = *(long **)(param_1 + 0x38), plVar7 != (long *)0x0)) &&
           ((*plVar7 == param_1 && ((int)plVar7[1] - 0x3f34U < 0x20)))) {
          if ((int)param_2 < 0) {
            iVar8 = 0;
            uVar1 = -param_2;
          }
          else {
            iVar8 = (param_2 >> 4) + 5;
            uVar1 = param_2 & 0xf;
            if (0x2f < (int)param_2) {
              uVar1 = param_2;
            }
          }
          if ((uVar1 == 0) || ((uVar1 & 0xfffffff8) == 8)) {
            if ((plVar7[9] != 0) && (*(uint *)(plVar7 + 7) != uVar1)) {
              (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
              plVar7[9] = 0;
            }
            *(int *)(plVar7 + 2) = iVar8;
            *(uint *)(plVar7 + 7) = uVar1;
            if ((((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
                (plVar7 = *(long **)(param_1 + 0x38), plVar7 != (long *)0x0)) &&
               ((*plVar7 == param_1 && ((int)plVar7[1] - 0x3f34U < 0x20)))) {
              *(undefined8 *)((long)plVar7 + 0x3c) = 0;
              *(undefined4 *)((long)plVar7 + 0x44) = 0;
              if ((((*(long *)(param_1 + 0x40) != 0) &&
                   ((*(long *)(param_1 + 0x48) != 0 &&
                    (plVar7 = *(long **)(param_1 + 0x38), plVar7 != (long *)0x0)))) &&
                  (*plVar7 == param_1)) && ((int)plVar7[1] - 0x3f34U < 0x20)) {
                plVar7[5] = 0;
                *(undefined8 *)(param_1 + 0x10) = 0;
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(undefined8 *)(param_1 + 0x30) = 0;
                if (*(uint *)(plVar7 + 2) != 0) {
                  *(ulong *)(param_1 + 0x60) = (ulong)*(uint *)(plVar7 + 2) & 1;
                }
                plVar7[1] = 0x3f34;
                plVar4 = plVar7 + 0xab;
                *(undefined4 *)((long)plVar7 + 0x1c) = 0x8000;
                plVar7[0x12] = (long)plVar4;
                *(undefined4 *)((long)plVar7 + 0x14) = 0;
                plVar7[6] = 0;
                plVar7[10] = 0;
                *(undefined4 *)(plVar7 + 0xb) = 0;
                plVar7[0xd] = (long)plVar4;
                plVar7[0xe] = (long)plVar4;
                plVar7[0x37d] = -0xffffffff;
                return 0;
              }
            }
          }
        }
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar4);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}


