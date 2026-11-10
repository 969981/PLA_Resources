/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f1cd0; name: FUN_002f1cd0
 */


undefined8 FUN_002f1cd0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 local_90 [4];
  long local_70 [4];
  undefined1 auStack_50 [32];
  undefined8 local_28;
  
  strerror(param_3);
  FUN_002f2c60(auStack_50);
  FUN_002f0690(param_1,param_2,auStack_50,0,0);
  local_70[0] = FUN_002f0ee0();
  bVar2 = *(byte *)(local_70[0] + 0x10);
  if (bVar2 == 0xff) {
    bVar2 = FUN_002f1ea0(local_70,8);
    lVar3 = local_70[0];
    if (bVar2 == 0xff) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xe1,2,
                   "Error %p is full, dropping int {\"%s\":%li}",local_70[0],"errno",(long)param_3);
      goto LAB_002f1d5c;
    }
  }
  *(byte *)(local_70[0] + 0x10) = bVar2;
  *(long *)(local_70[0] + (ulong)bVar2 * 8 + 0x38) = (long)param_3;
  lVar3 = local_70[0];
LAB_002f1d5c:
  strerror(param_3);
  FUN_002f2c60(local_70);
  local_90[0] = FUN_002f0ee0(lVar3);
  FUN_002f0980(local_90,2,local_70);
  uVar1 = local_90[0];
  FUN_002f2ff0(local_90,param_4);
  local_28 = FUN_002f0ee0(uVar1);
  FUN_002f0980(&local_28,3,local_90);
  return local_28;
}


