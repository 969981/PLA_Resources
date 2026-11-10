/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001056b0; name: FUN_001056b0
 */


uint FUN_001056b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  long local_70;
  undefined1 auStack_68 [4];
  int local_64;
  
  if (param_2 < 2) {
LAB_00105814:
    FUN_0010a430();
    pcVar4 = *(code **)PTR_PTR_043722f8;
    if (pcVar4 == (code *)0x0) goto LAB_00105844;
    uVar3 = 0x807;
  }
  else {
    lVar2 = FUN_0010a590(auStack_68,param_1);
    if (lVar2 == 0) {
      FUN_0010a430();
      if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
        (**(code **)PTR_PTR_043722f8)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x7e7,
                   "OODLE ERROR : LZ corruption : invalid header..\n");
      }
      FUN_0010a450();
      goto LAB_00105814;
    }
    uVar5 = *(uint *)(&DAT_039c2d78 + (long)local_64 * 4);
    if (param_3 < 0x40001) {
      return uVar5;
    }
    local_70 = 0;
    lVar2 = FUN_00105910(param_1,param_2,0,0x40000,&local_70,0);
    if (lVar2 == param_2) {
      return uVar5;
    }
    if (local_70 != 0x40000) {
      return uVar5;
    }
    lVar6 = 0x40000;
    while( true ) {
      if ((lVar2 < 1) || (lVar1 = param_2 - lVar2, lVar1 == 0 || param_2 < lVar2)) {
        FUN_0010a430();
        if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
          (**(code **)PTR_PTR_043722f8)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x821,
                     "OODLE ERROR : LZ corruption : insufficient comp data in OodleLZ_GetAllChunksCompressor\n"
                    );
        }
        FUN_0010a450();
        return uVar5;
      }
      param_3 = param_3 - lVar6;
      if (param_3 == 0) {
        return uVar5;
      }
      if (lVar1 < 2) break;
      param_1 = param_1 + lVar2;
      lVar2 = FUN_0010a590(auStack_68,param_1);
      if (lVar2 == 0) {
        FUN_0010a430();
        if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
          (**(code **)PTR_PTR_043722f8)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x7e7,
                     "OODLE ERROR : LZ corruption : invalid header..\n");
        }
        FUN_0010a450();
        break;
      }
      if (uVar5 != *(uint *)(&DAT_039c2d78 + (long)local_64 * 4)) {
        if (((0x3b00U >> (ulong)(*(uint *)(&DAT_039c2d78 + (long)local_64 * 4) & 0x1f) & 1) == 0) ||
           ((0x3b00U >> (ulong)(uVar5 & 0x1f) & 1) == 0)) {
          return 0xe;
        }
        uVar5 = 0xc;
      }
      lVar6 = param_3;
      if (0x3ffff < param_3) {
        lVar6 = 0x40000;
      }
      local_70 = 0;
      lVar2 = FUN_00105910(param_1,lVar1,0,lVar6,&local_70,0);
      if (lVar1 == lVar2) {
        return uVar5;
      }
      param_2 = lVar1;
      if (local_70 != lVar6) {
        return uVar5;
      }
    }
    FUN_0010a430();
    pcVar4 = *(code **)PTR_PTR_043722f8;
    if (pcVar4 == (code *)0x0) goto LAB_00105844;
    uVar3 = 0x833;
  }
  (*pcVar4)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar3,
            "OODLE ERROR : Invalid chunk compressor in OodleLZ_GetAllChunksCompressor\n");
LAB_00105844:
  FUN_0010a450();
  return 0xffffffff;
}


