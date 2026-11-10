/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f0690; name: FUN_002f0690
 */


long FUN_002f0690(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4,long param_5
                 )

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  void *local_70 [4];
  long local_48;
  
  uVar1 = (int)param_5 * 2 + 0xf;
  lVar3 = FUN_002ebd50((uVar1 & 0xff) * 8 + 0x38);
  puVar4 = PTR_DAT_04373880;
  if (lVar3 == 0) {
    return 2;
  }
  local_48 = lVar3;
  if (DAT_04153060 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x14d,2,
                 "Error creation occurred when error creation was disabled [%s:%d]",param_1,param_2)
    ;
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_04373880[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x153,0,
                 "%p create [%s:%d]",lVar3,param_1,param_2);
  }
  *(undefined1 *)(lVar3 + 0x2f) = 0;
  *(char *)(lVar3 + 0x30) = (char)uVar1;
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x27) = 0xffffffffffffffff;
  bVar2 = FUN_002f1ea0(&local_48,8);
  if (bVar2 == 0xff) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xe1,2,
                 "Error %p is full, dropping int {\"%s\":%li}",local_48,"file_line",(long)param_2);
  }
  else {
    *(byte *)(local_48 + 0x11) = bVar2;
    *(long *)(local_48 + (ulong)bVar2 * 8 + 0x38) = (long)param_2;
  }
  FUN_002f2c60(local_70,param_1);
  FUN_002f0980(&local_48,1,local_70);
  FUN_002f0980(&local_48,0,param_3);
  if (param_5 != 0) {
    plVar5 = (long *)*param_4;
    while( true ) {
      if (plVar5 != (long *)0x0) {
        if (&DAT_00000004 < plVar5) {
          if (puVar4[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x81,0,
                         "%p: %ld -> %ld [%s:%d]",plVar5,*plVar5,*plVar5 + 1,
                         "external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x16a);
          }
          FUN_002ef5d0(plVar5);
        }
        FUN_002f0be0(&local_48,plVar5);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      if (param_5 == 0) break;
      plVar5 = (long *)*param_4;
    }
  }
  auVar6 = FUN_002eec80(1);
  bVar2 = *(byte *)(local_48 + 0x2c);
  if ((bVar2 == 0xff) && (bVar2 = FUN_002f1ea0(&local_48,0x10), bVar2 == 0xff)) {
    if (auVar6._12_4_ < 4) {
      puVar4 = (&PTR_s__monotonic__041530e0)[(long)auVar6._8_8_ >> 0x20];
    }
    else {
      puVar4 = &DAT_0396757d;
    }
    FUN_002f4490(local_70,"\"%s%ld.%09d\"",puVar4,auVar6._0_8_,auVar6._8_8_ & 0xffffffff);
    lVar3 = local_48;
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x106,2,
                 "Error %p is full, dropping \"%s\":\"%s\"}",local_48,"created",local_70[0]);
    free(local_70[0]);
  }
  else {
    *(byte *)(local_48 + 0x2c) = bVar2;
    *(undefined1 (*) [16])(local_48 + (ulong)bVar2 * 8 + 0x38) = auVar6;
    lVar3 = local_48;
  }
  *(undefined8 *)(lVar3 + 8) = 0;
  FUN_002ef5c0(lVar3,1);
  return lVar3;
}


