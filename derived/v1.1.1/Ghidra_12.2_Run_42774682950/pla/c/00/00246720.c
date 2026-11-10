/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00246720; name: FUN_00246720
 */


void FUN_00246720(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  undefined8 local_38;
  
  FUN_00246930();
  lVar5 = 0;
  if (param_1[0xb] != 0) {
    FUN_00246a94(param_1,param_2,param_3);
    lVar5 = param_1[0xb];
    if ((((lVar5 != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) &&
        ((*(byte *)(lVar5 + 8) >> 5 & 1) != 0)) && (*(char *)(param_1 + 0x13) != '\0')) {
      FUN_00246f40(param_1,param_2,param_3);
      lVar5 = param_1[0xb];
    }
  }
  if (param_1[1] == 0) {
    if (lVar5 == 0) {
      return;
    }
    if ((*(byte *)(lVar5 + 8) >> 4 & 1) != 0) {
      return;
    }
    puVar4 = (undefined8 *)FUN_0022f714(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_38 = *puVar4;
    iVar2 = *(int *)(param_1 + 0x1b);
    lVar5 = param_1[0xe];
  }
  else {
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 8) >> 4 & 1) != 0)) {
      return;
    }
    if ((((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0) || ((*(byte *)(param_1[1] + 4) >> 1 & 1) == 0))
       || (*(char *)((long)param_1 + 0x54) == '\0')) {
      FUN_00247844(param_1,param_2,param_3);
      (**(code **)(*(long *)*param_1 + 200))((long *)*param_1,param_3);
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
      lVar5 = param_1[7];
      lStack_48 = plVar1[1];
      iVar3 = *(int *)(param_1 + 8);
      local_50 = *plVar1 + (long)*(int *)(param_1 + 6);
      goto LAB_002468d8;
    }
    puVar4 = (undefined8 *)FUN_0022f714(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_38 = *puVar4;
    iVar2 = *(int *)(param_1 + 6);
    lVar5 = param_1[9];
  }
  FUN_00251550(param_2,param_3,param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  FUN_008782ac(param_3,*(undefined4 *)((long)param_1 + 0x224),4,lVar5 + 8,&local_38);
  (**(code **)(*(long *)*param_1 + 200))((long *)*param_1,param_3);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  lVar5 = param_1[0x43];
  iVar3 = *(int *)(param_1 + 0x44);
  local_50 = *plVar1 + (long)iVar2;
LAB_002468d8:
  lVar6 = *(long *)(param_2 + 0xb8);
  FUN_00878324(param_3,*(undefined4 *)(*(long *)(lVar5 + 0x18) + (long)iVar3 * 4),0,&local_50,0x230)
  ;
  FUN_00877574(param_3,3,1,lVar6 + 0x248,6,0);
  return;
}


