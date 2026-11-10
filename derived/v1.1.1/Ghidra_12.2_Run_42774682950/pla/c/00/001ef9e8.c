/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ef9e8; name: FUN_001ef9e8
 */


undefined4 FUN_001ef9e8(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  
  local_24 = 0;
  uVar1 = 0;
  if ((undefined **)param_1[0x84] == &PTR_s_HTTPS_0411cfe0 ||
      (undefined **)param_1[0x84] == &PTR_DAT_0411d068) {
    lVar3 = *(long *)(*param_1 + 0x1e8);
    if (*(long *)(lVar3 + 0x280) == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = param_1[0xaa];
      *(undefined8 *)(lVar3 + 0x280) = 0;
      FUN_0020b9d4(lVar2,*(undefined4 *)(lVar3 + 0x218));
      FUN_001efa74(param_1,param_1 + 0xaa,&local_24);
      uVar1 = local_24;
    }
  }
  return uVar1;
}


