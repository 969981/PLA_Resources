/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407a50; name: FUN_00407a50
 */


undefined4 FUN_00407a50(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  if ((DAT_0439e6e8 == 0) &&
     (DAT_0439e6e8 = FUN_00405620(&LAB_00408ed0,&LAB_00409080), DAT_0439e6e8 == 0)) {
    return 0;
  }
  plVar1 = (long *)FUN_00413930(param_1);
  if (plVar1 == (long *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
    goto LAB_00407b74;
  }
  puVar2 = (undefined4 *)FUN_00400260(0x10,"external/openssl/crypto/objects/obj_dat.c",0xb9);
  if (puVar2 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if ((*(int *)((long)plVar1 + 0x14) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_00400260(0x10,"external/openssl/crypto/objects/obj_dat.c",0xbc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
        goto LAB_00407b58;
      }
    }
    if (*plVar1 == 0) {
      puVar7 = (undefined4 *)0x0;
      lVar6 = plVar1[1];
    }
    else {
      puVar7 = (undefined4 *)FUN_00400260(0x10,"external/openssl/crypto/objects/obj_dat.c",0xbf);
      if (puVar7 == (undefined4 *)0x0) goto LAB_00407b58;
      lVar6 = plVar1[1];
    }
    if (lVar6 == 0) {
      puVar4 = (undefined4 *)0x0;
joined_r0x00407bf0:
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        *(long **)(puVar3 + 2) = plVar1;
        uVar5 = FUN_00405810(DAT_0439e6e8,puVar3);
        FUN_00400420(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      }
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 1;
        *(long **)(puVar7 + 2) = plVar1;
        uVar5 = FUN_00405810(DAT_0439e6e8,puVar7);
        FUN_00400420(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      }
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 2;
        *(long **)(puVar4 + 2) = plVar1;
        uVar5 = FUN_00405810(DAT_0439e6e8,puVar4);
        FUN_00400420(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      }
      *puVar2 = 3;
      *(long **)(puVar2 + 2) = plVar1;
      uVar5 = FUN_00405810(DAT_0439e6e8,puVar2);
      FUN_00400420(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      *(uint *)(plVar1 + 4) = *(uint *)(plVar1 + 4) & 0xfffffff2;
      return (int)plVar1[2];
    }
    puVar4 = (undefined4 *)FUN_00400260(0x10,"external/openssl/crypto/objects/obj_dat.c",0xc2);
    if (puVar4 != (undefined4 *)0x0) goto joined_r0x00407bf0;
  }
LAB_00407b58:
  FUN_004014b0(8,0x69,0x41,"external/openssl/crypto/objects/obj_dat.c",0xd4);
LAB_00407b74:
  FUN_00400420(puVar3,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_00400420(puVar7,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_00400420(0,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_00400420(puVar2,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_00409be0(plVar1);
  return 0;
}


