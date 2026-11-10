/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00481340; name: FUN_00481340
 */


undefined8
FUN_00481340(undefined8 param_1,int param_2,long param_3,void *param_4,int param_5,int param_6)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  byte *__dest_00;
  size_t __n;
  undefined8 uVar3;
  undefined4 uVar4;
  int local_34;
  
  if (param_6 != 2) {
    if ((param_3 != 0) && (FUN_00446af0(0,&local_34,0,param_3), local_34 != -1)) {
      uVar2 = 0x66;
      uVar3 = 0x3b;
      goto LAB_004814c8;
    }
    if (param_4 != (void *)0x0) {
      iVar1 = 0x20;
      if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (iVar1 = 0x38, param_2 != 0x40b)) {
        iVar1 = 0x39;
      }
      if (iVar1 == param_5) goto LAB_0048136c;
    }
    uVar2 = 0x66;
    uVar3 = 0x41;
LAB_004814c8:
    FUN_004014b0(0x10,0x10a,uVar2,"external/openssl/crypto/ec/ecx_meth.c",uVar3);
    return 0;
  }
LAB_0048136c:
  __dest = (void *)FUN_004002a0(0x48,"external/openssl/crypto/ec/ecx_meth.c",0x46);
  if (__dest == (void *)0x0) {
    uVar2 = 0x41;
    uVar3 = 0x48;
    goto LAB_004814c8;
  }
  if (param_6 == 0) {
    memcpy(__dest,param_4,(long)param_5);
    goto LAB_004814e8;
  }
  uVar2 = 0x20;
  if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (uVar2 = 0x38, param_2 != 0x40b)) {
    uVar2 = 0x39;
  }
  __dest_00 = (byte *)thunk_FUN_00400260(uVar2,"external/openssl/crypto/ec/ecx_meth.c",0x50);
  *(byte **)((long)__dest + 0x40) = __dest_00;
  if (__dest_00 == (byte *)0x0) {
    FUN_004014b0(0x10,0x10a,0x41,"external/openssl/crypto/ec/ecx_meth.c",0x52);
LAB_004815bc:
    FUN_00400420(__dest,"external/openssl/crypto/ec/ecx_meth.c",0x79);
    return 0;
  }
  if (param_6 == 2) {
    uVar4 = 0x20;
    if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (uVar4 = 0x38, param_2 != 0x40b)) {
      uVar4 = 0x39;
    }
    iVar1 = FUN_00427b20(__dest_00,uVar4);
    if (iVar1 < 1) {
      thunk_FUN_00400420(__dest_00,"external/openssl/crypto/ec/ecx_meth.c",0x57);
      *(undefined8 *)((long)__dest + 0x40) = 0;
      goto LAB_004815bc;
    }
    if (0x43e < param_2) goto LAB_00481584;
    if (param_2 == 0x40a) {
      *__dest_00 = *__dest_00 & 0xf8;
      __dest_00[0x1f] = __dest_00[0x1f] & 0x3f | 0x40;
      goto LAB_00481600;
    }
    if (param_2 != 0x40b) goto LAB_004814e8;
    *__dest_00 = *__dest_00 & 0xfc;
    __dest_00[0x37] = __dest_00[0x37] | 0x80;
  }
  else {
    __n = 0x20;
    if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (__n = 0x38, param_2 != 0x40b)) {
      __n = 0x39;
    }
    memcpy(__dest_00,param_4,__n);
    if (0x43e < param_2) {
LAB_00481584:
      if (param_2 == 0x43f) {
        FUN_00485960(__dest,__dest_00);
      }
      else if (param_2 == 0x440) {
        FUN_0048d100(__dest,__dest_00);
      }
      goto LAB_004814e8;
    }
    if (param_2 == 0x40a) {
LAB_00481600:
      FUN_00489fa0(__dest,__dest_00);
      goto LAB_004814e8;
    }
    if (param_2 != 0x40b) goto LAB_004814e8;
  }
  thunk_FUN_00491490(__dest,__dest_00);
LAB_004814e8:
  FUN_004234e0(param_1,param_2,__dest);
  return 1;
}


