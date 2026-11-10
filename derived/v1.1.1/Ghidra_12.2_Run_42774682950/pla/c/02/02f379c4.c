/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f379c4; name: FUN_02f379c4
 */


void FUN_02f379c4(undefined4 param_1,long param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined4 local_54;
  
  if (DAT_0442c008 != (long *)0x0) {
    plVar4 = DAT_0442c008;
    local_54 = param_1;
    if (param_3 == 0) {
      do {
        plVar3 = (long *)plVar4[0xe];
        lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if ((lVar2 == param_2) &&
           (((param_4 == 0 || (*(int *)(plVar4[0xc] + 0x2c) == param_4)) &&
            (iVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4,&local_54,param_5 & 1), iVar1 == 1)))) {
          FUN_02edd1bc(DAT_0440a170,*(undefined4 *)(plVar4[0xc] + 0x2c));
        }
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0);
    }
    else {
      do {
        plVar3 = (long *)plVar4[0xe];
        lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if ((((lVar2 == param_2) && (*(long *)(plVar4[0xc] + 0x30) == param_3)) &&
            ((param_4 == 0 || (*(int *)(plVar4[0xc] + 0x2c) == param_4)))) &&
           (iVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4,&local_54,param_5 & 1), iVar1 == 1)) {
          FUN_02edd1bc(DAT_0440a170,*(undefined4 *)(plVar4[0xc] + 0x2c));
        }
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


