/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fa130; name: FUN_003fa130
 */


undefined8 FUN_003fa130(char *param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  ulong uVar3;
  void *__ptr;
  size_t sVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong local_38;
  
  FUN_002f2710(&local_60);
  local_38 = 0;
  __stream = fopen(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    piVar5 = __errno_location();
    uVar3 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x2d,
                         *piVar5,"fopen");
    if (uVar3 == 0) {
LAB_003fa334:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                   "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_3[1] = uStack_58;
    *param_3 = local_60;
    param_3[3] = uStack_48;
    param_3[2] = uStack_50;
    local_38 = uVar3;
  }
  else {
    fseek(__stream,0,2);
    uVar3 = ftell(__stream);
    fseek(__stream,0,0);
    uVar1 = uVar3;
    if (param_2 != 0) {
      uVar1 = uVar3 + 1;
    }
    __ptr = (void *)FUN_002ebd50(uVar1);
    sVar4 = fread(__ptr,1,uVar3,__stream);
    if (sVar4 < uVar3) {
      free(__ptr);
      piVar5 = __errno_location();
      uVar3 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x39,
                           *piVar5,"fread");
      if (uVar3 == 0) goto LAB_003fa334;
      local_38 = uVar3;
      iVar2 = ferror(__stream);
      if (iVar2 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x3a,2,
                     "assertion failed: %s","ferror(file)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_2 != 0) {
        *(undefined1 *)((long)__ptr + uVar3) = 0;
        uVar3 = uVar3 + 1;
      }
      FUN_002f2d10(&local_80,__ptr,uVar3,PTR_free_04374168);
      uStack_58 = uStack_78;
      local_60 = local_80;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
    }
    param_3[1] = uStack_58;
    *param_3 = local_60;
    param_3[3] = uStack_48;
    param_3[2] = uStack_50;
    fclose(__stream);
    if (local_38 == 0) {
      return 0;
    }
  }
  FUN_002f2c60(&local_80,"Failed to load file");
  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x48,
                       &local_80,&local_38,1);
  FUN_002f2ff0(auStack_a0,param_1);
  uVar6 = FUN_002f1340(uVar6,8,auStack_a0);
  if (4 < local_38) {
    FUN_002f0430(local_38,"external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x4c);
  }
  return uVar6;
}


