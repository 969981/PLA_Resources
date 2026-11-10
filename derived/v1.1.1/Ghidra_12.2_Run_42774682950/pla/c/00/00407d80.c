/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407d80; name: FUN_00407d80
 */


undefined * FUN_00407d80(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  uint local_38;
  undefined4 local_20 [2];
  undefined1 *local_18;
  
  if (0x4aa < param_1) {
    if (DAT_0439e6e8 == 0) {
      return (undefined *)0x0;
    }
    local_20[0] = 3;
    local_18 = auStack_48;
    local_38 = param_1;
    lVar2 = FUN_00405c90(DAT_0439e6e8,local_20);
    if (lVar2 != 0) {
      return (undefined *)**(undefined8 **)(lVar2 + 8);
    }
    uVar1 = 0x10c;
LAB_00407e48:
    FUN_004014b0(8,0x68,0x65,"external/openssl/crypto/objects/obj_dat.c",uVar1);
    return (undefined *)0x0;
  }
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    if (*(int *)(&DAT_04157c60 + (long)(int)param_1 * 0x28) == 0) {
      uVar1 = 0xfe;
      goto LAB_00407e48;
    }
    lVar2 = (long)(int)param_1;
  }
  return (&PTR_s_UNDEF_04157c50)[lVar2 * 5];
}


