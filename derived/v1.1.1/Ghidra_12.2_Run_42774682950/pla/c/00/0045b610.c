/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b610; name: FUN_0045b610
 */


long * FUN_0045b610(undefined8 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  size_t __n;
  ushort local_24;
  undefined1 local_22;
  
  local_24 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  if (param_3 == (undefined4 *)0x0) {
    __n = 2;
    iVar1 = FUN_00407950(param_1);
  }
  else {
    __n = 3;
    local_22 = (undefined1)*param_3;
    iVar1 = FUN_00407950(param_1);
  }
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      plVar3 = (long *)FUN_00407970(param_1,iVar1);
      if ((*(int *)*plVar3 == (int)__n) &&
         (iVar2 = memcmp(*(void **)((int *)*plVar3 + 2),&local_24,__n), iVar2 == 0)) {
        return plVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(param_1);
    } while (iVar1 < iVar2);
  }
  plVar3 = (long *)FUN_00421c70(PTR_DAT_04374368);
  if (plVar3 != (long *)0x0) {
    if (plVar3[1] == 0) {
      lVar4 = FUN_00421c70(PTR_DAT_04374370);
      plVar3[1] = lVar4;
      if (lVar4 == 0) goto LAB_0045b71c;
    }
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      lVar4 = FUN_0041cee0();
      *plVar3 = lVar4;
      if (lVar4 == 0) goto LAB_0045b71c;
    }
    iVar1 = thunk_FUN_0040a280(lVar4,&local_24,__n);
    if ((iVar1 != 0) && (iVar1 = FUN_00407800(param_1,plVar3), iVar1 != 0)) {
      return plVar3;
    }
  }
LAB_0045b71c:
  FUN_00421810(plVar3,PTR_DAT_04374368);
  return (long *)0x0;
}


