/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e2b70; name: FUN_007e2b70
 */


void FUN_007e2b70(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  Result *pRVar5;
  ulong local_78;
  undefined2 local_70;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  plVar2 = (long *)FUN_00847424();
  puVar1 = PTR_DAT_043773c0;
  if (plVar2 == (long *)0x0) {
    local_58[0] = 0x10408;
LAB_007e2c78:
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  }
  else {
    if ((*(int *)((long)plVar2 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) * -2) -
        0x3c < param_5) {
      local_58[0] = 0x10407;
      goto LAB_007e2c78;
    }
    lVar3 = FUN_00847388(param_2);
    if (lVar3 == 0) {
      local_58[0] = 0x2c27;
      goto LAB_007e2c78;
    }
    (**(code **)(*plVar2 + 0x80))(local_58,plVar2,param_3);
    if (local_58[0] == 0) {
      if (*(char *)(*(long *)puVar1 + 0xc0) == '\0') {
        local_68[0] = 0x10408;
        local_78 = local_78 & 0xffffffff00000000;
        pRVar5 = (Result *)&local_78;
      }
      else {
        local_78 = 0;
        local_70 = 0;
        local_68[0] = (**(code **)(*param_2 + 0x18))(param_2);
        lVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,local_68,param_3,param_5,&local_78);
        if (lVar3 != 0) {
          FUN_0084695c(param_1,plVar2,param_4);
          return;
        }
        pRVar5 = (Result *)local_48;
        local_68[0] = 0;
        local_48[0] = 0;
      }
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),pRVar5);
      piVar4 = local_68;
      goto LAB_007e2c94;
    }
  }
  piVar4 = local_58;
LAB_007e2c94:
  FUN_007ee578(param_1,piVar4);
  return;
}


