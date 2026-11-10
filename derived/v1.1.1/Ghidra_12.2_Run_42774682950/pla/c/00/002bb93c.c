/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bb93c; name: FUN_002bb93c
 */


void FUN_002bb93c(ulong *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  
  if (*param_2 == '\0') {
    uVar3 = *(ulong *)(param_2 + 8);
    if (uVar3 == 0) goto LAB_002bbb00;
    uVar7 = 0;
    plVar5 = *(long **)(param_2 + 0x18) + 4;
    if (**(long **)(param_2 + 0x18) != 0) goto LAB_002bba8c;
    while (iVar2 = strncmp((char *)((long)plVar5 + -0x17),"grpc-status-details-bin",
                           (ulong)*(byte *)(plVar5 + -3)), plVar6 = plVar5, iVar2 != 0) {
      while( true ) {
        uVar7 = uVar7 + 1;
        plVar5 = plVar6 + 0xd;
        if (uVar3 <= uVar7) goto LAB_002bbb00;
        if (plVar6[9] == 0) break;
LAB_002bba8c:
        iVar2 = strncmp((char *)plVar5[-2],"grpc-status-details-bin",plVar5[-3]);
        plVar6 = plVar5;
        if (iVar2 == 0) goto LAB_002bba9c;
      }
    }
LAB_002bba9c:
    if (*plVar5 != 0) {
      uVar3 = plVar5[1];
      __src = (void *)plVar5[2];
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      goto joined_r0x002bbab4;
    }
    uVar3 = (ulong)*(byte *)(plVar5 + 1);
    __src = (void *)((long)plVar5 + 9);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (uVar3 < 0x17) goto LAB_002bba2c;
LAB_002bbac0:
    uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    param_1[1] = uVar3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar7 | 1;
  }
  else {
    param_2 = param_2 + 0x28;
    pcVar8 = *(char **)param_2;
    if (pcVar8 == (char *)0x0) {
LAB_002bbb00:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    pcVar4 = param_2;
    do {
      uVar3 = *(ulong *)(pcVar8 + 0x28);
      sVar1 = uVar3;
      if (0x16 < uVar3) {
        sVar1 = 0x17;
      }
      iVar2 = memcmp(*(void **)(pcVar8 + 0x20),"grpc-status-details-bin",sVar1);
      uVar9 = 0xffffffff;
      if (-1 < iVar2) {
        uVar9 = 0xffffffff;
        if (iVar2 != 0) {
          uVar9 = 1;
        }
        if ((0x16 < uVar3) && (iVar2 == 0)) {
          uVar9 = (uint)(0x17 < uVar3);
        }
      }
      if ((int)uVar9 >= 0) {
        pcVar4 = pcVar8;
      }
      pcVar8 = *(char **)(pcVar8 + (ulong)((int)uVar9 < 0) * 8);
    } while (pcVar8 != (char *)0x0);
    if (pcVar4 == param_2) goto LAB_002bbb00;
    uVar3 = *(ulong *)(pcVar4 + 0x28);
    sVar1 = 0x17;
    if (uVar3 < 0x18) {
      sVar1 = uVar3;
    }
    iVar2 = memcmp("grpc-status-details-bin",*(void **)(pcVar4 + 0x20),sVar1);
    if ((iVar2 < 0) || (0x17 < uVar3 && iVar2 == 0)) goto LAB_002bbb00;
    __src = *(void **)(pcVar4 + 0x30);
    uVar3 = *(ulong *)(pcVar4 + 0x38);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
joined_r0x002bbab4:
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (0x16 < uVar3) goto LAB_002bbac0;
LAB_002bba2c:
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar3 << 1);
    if (uVar3 == 0) goto LAB_002bbaf8;
  }
  memcpy(__dest,__src,uVar3);
LAB_002bbaf8:
  *(undefined1 *)((long)__dest + uVar3) = 0;
  return;
}


