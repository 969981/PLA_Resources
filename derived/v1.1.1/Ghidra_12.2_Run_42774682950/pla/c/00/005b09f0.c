/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b09f0; name: FUN_005b09f0
 */


void FUN_005b09f0(ulong param_1)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *__ptr;
  void *__ptr_00;
  long *plVar5;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar5 = (long *)(param_1 & 0xfffffffffffffffc);
  lStack_48 = plVar5[1];
  local_50 = *plVar5;
  lStack_38 = plVar5[3];
  lStack_40 = plVar5[2];
  __ptr = (void *)FUN_002f2680(&local_50);
  iVar4 = FUN_005a79b0(plVar5);
  plVar1 = plVar5 + 4;
  if (iVar4 == 0) {
    lStack_68 = plVar5[5];
    local_70 = *plVar1;
    lStack_58 = plVar5[7];
    lStack_60 = plVar5[6];
    __ptr_00 = (void *)FUN_002f2680(&local_70);
  }
  else {
    __ptr_00 = (void *)FUN_00304ac0(plVar1,1);
  }
  bVar2 = false;
  if (*plVar5 != 0) {
    bVar2 = *(uint *)(*plVar5 + 8) < 2;
  }
  bVar3 = false;
  if (*plVar1 != 0) {
    bVar3 = *(uint *)(*plVar1 + 8) < 2;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
               ,0x27f,1,"Decode: \'%s: %s\', elem_interned=%d [%d], k_interned=%d, v_interned=%d",
               __ptr,__ptr_00,(uint)param_1 & 1,(uint)param_1 & 3,bVar2,bVar3);
  free(__ptr);
  free(__ptr_00);
  return;
}


