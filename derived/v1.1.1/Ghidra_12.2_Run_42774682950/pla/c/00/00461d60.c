/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00461d60; name: FUN_00461d60
 */


long FUN_00461d60(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  int local_54;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    return *(long *)(param_1 + 0x100);
  }
  FUN_00400140(*(undefined8 *)(param_1 + 0x150));
  if (*(long *)(param_1 + 0x100) != 0) goto LAB_00461f64;
  puVar3 = (undefined8 *)FUN_00400260(0x28,"external/openssl/crypto/x509v3/pcy_cache.c",0x5c);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_004014b0(0x22,0xaa,0x41,"external/openssl/crypto/x509v3/pcy_cache.c",0x5e);
    goto LAB_00461f64;
  }
  puVar3[2] = 0xffffffffffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[3] = 0xffffffffffffffff;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined8 **)(param_1 + 0x100) = puVar3;
  plVar4 = (long *)FUN_0045e200(param_1,0x191,&local_54,0);
  if (plVar4 == (long *)0x0) {
    if (local_54 != -1) goto LAB_00461f44;
LAB_00461e58:
    lVar6 = FUN_0045e200(param_1,0x59,&local_54,0);
    if (lVar6 == 0) {
      if (local_54 == -1) goto LAB_00461f64;
      goto LAB_00461f44;
    }
    plVar10 = *(long **)(param_1 + 0x100);
    iVar1 = FUN_00407950();
    if (0 < iVar1) {
      lVar7 = FUN_00407340(&LAB_00462100);
      plVar10[1] = lVar7;
      if (lVar7 != 0) {
        iVar9 = 0;
        uVar5 = 0x2d;
        do {
          uVar8 = FUN_00407970(lVar6,iVar9);
          lVar7 = FUN_00462760(uVar8,0,local_54);
          if (lVar7 == 0) goto LAB_00461f9c;
          iVar2 = FUN_00407f40(*(undefined8 *)(lVar7 + 8));
          if (iVar2 == 0x2ea) {
            if (*plVar10 != 0) goto LAB_00461fd0;
            *plVar10 = lVar7;
          }
          else {
            iVar2 = FUN_00407710(plVar10[1],lVar7);
            if (-1 < iVar2) {
LAB_00461fd0:
              iVar1 = -1;
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x800;
              goto LAB_00461fec;
            }
            iVar2 = FUN_00407800(plVar10[1],lVar7);
            if (iVar2 == 0) {
              FUN_004014b0(0x22,0xa9,0x41,"external/openssl/crypto/x509v3/pcy_cache.c",0x3d);
              iVar1 = 0;
              goto LAB_00461fec;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar1 != iVar9);
        lVar7 = 0;
        iVar1 = 1;
        goto LAB_00461fec;
      }
      uVar5 = 0x26;
LAB_00461f9c:
      FUN_004014b0(0x22,0xa9,0x41,"external/openssl/crypto/x509v3/pcy_cache.c",uVar5);
      FUN_004078c0(lVar6,PTR_LAB_043743d8);
      iVar1 = 0;
LAB_00462048:
      FUN_004078c0(plVar10[1],PTR_FUN_04374408);
      plVar10[1] = 0;
      local_54 = iVar1;
      goto LAB_00461f64;
    }
    lVar7 = 0;
    iVar1 = 0;
LAB_00461fec:
    FUN_00462700(lVar7);
    FUN_004078c0(lVar6,PTR_LAB_043743d8);
    if (iVar1 < 1) goto LAB_00462048;
    local_54 = 1;
    lVar6 = FUN_0045e200(param_1,0x2eb,&local_54,0);
    if (lVar6 == 0) {
      if (local_54 == -1) goto LAB_00462070;
      goto LAB_00461f44;
    }
    local_54 = FUN_00462310(param_1,lVar6);
    if (local_54 < 1) goto LAB_00461f44;
LAB_00462070:
    lVar6 = FUN_0045e200(param_1,0x2ec,&local_54,0);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 4) != 0x102) {
        uVar5 = FUN_00420b50(lVar6);
        puVar3[2] = uVar5;
        goto LAB_00461f54;
      }
      goto LAB_00461f48;
    }
    if (local_54 != -1) goto LAB_00461f48;
  }
  else {
    if (*plVar4 == 0) {
      lVar6 = plVar4[1];
      if (lVar6 != 0) goto LAB_00461e44;
    }
    else if (*(int *)(*plVar4 + 4) != 0x102) {
      uVar5 = FUN_00420b50();
      puVar3[3] = uVar5;
      lVar6 = plVar4[1];
      if (lVar6 == 0) goto LAB_00461e58;
LAB_00461e44:
      if (*(int *)(lVar6 + 4) != 0x102) {
        uVar5 = FUN_00420b50();
        puVar3[4] = uVar5;
        goto LAB_00461e58;
      }
    }
LAB_00461f44:
    lVar6 = 0;
LAB_00461f48:
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x800;
  }
LAB_00461f54:
  FUN_00462300(plVar4);
  thunk_FUN_0040a4b0(lVar6);
LAB_00461f64:
  FUN_00400160(*(undefined8 *)(param_1 + 0x150));
  return *(long *)(param_1 + 0x100);
}


