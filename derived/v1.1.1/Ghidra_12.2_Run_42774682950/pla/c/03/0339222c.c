/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339222c; name: FUN_0339222c
 */


ulong FUN_0339222c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long *plVar2;
  char *__s2;
  char *__s1;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  
  local_70 = param_2;
  plVar2 = (long *)FUN_032e2050(param_3,0x800000);
  if (plVar2 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar2;
  }
  if (*(short *)(lVar7 + 4) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    uVar5 = 0;
    do {
      __s2 = (char *)FUN_032e2c18(&local_70);
      local_78 = *(undefined8 *)(lVar7 + 8 + uVar5 * 8);
      __s1 = (char *)FUN_032e2c18(&local_78);
      iVar1 = strcmp(__s1,__s2);
      if (iVar1 == 0) {
        FUN_032e4384(&local_68,local_78);
        if ((char *)0x1 < local_68) {
          local_80 = uVar8 | param_4 & 0xffffffff;
          local_68 = (char *)CONCAT44(local_68._4_4_,0xffffffff);
          iVar1 = FUN_03397f54(param_1 + 0x120,&local_80,&local_68);
          piVar6 = (int *)(*(long *)(param_1 + 0x120) + (long)iVar1 * 0xc + 8);
          if (*piVar6 < 0) {
            local_68 = __s2;
            lVar7 = FUN_033962f8(param_1 + 0x80,&local_68);
            *piVar6 = (int)((ulong)(lVar7 - *(long *)(param_1 + 0x80)) >> 3);
            if ((*(char *)(param_1 + 0x290) != '\0') &&
               (lVar7 = FUN_032e87e4(param_1 + 0x2c8,param_3,&local_68), (char)local_68 != '\0')) {
              iVar4 = *(int *)(param_1 + 0x150);
              lVar3 = *(long *)(param_1 + 0x148);
              iVar1 = iVar4 + 1;
              if ((int)(*(uint *)(param_1 + 0x154) & 0x3fffffff) <= iVar4) {
                lVar3 = FUN_03388e24(PTR_PTR_0434a080,iVar1);
                iVar4 = *(int *)(param_1 + 0x150);
                *(long *)(param_1 + 0x148) = lVar3;
              }
              *(ulong *)(lVar3 + (long)iVar4 * 8) = param_4 & 0xffffffff | lVar7 << 0x20;
              *(int *)(param_1 + 0x150) = iVar1;
            }
          }
        }
        goto LAB_033922d8;
      }
      uVar5 = uVar5 + 1;
      uVar8 = uVar8 + 0x100000000;
    } while ((long)uVar5 < (long)*(short *)(lVar7 + 4));
    uVar5 = 0xffffffff;
  }
LAB_033922d8:
  return uVar5 & 0xffffffff;
}


