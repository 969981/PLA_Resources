/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00283834; name: FUN_00283834
 */


void FUN_00283834(long param_1,int param_2,undefined8 param_3,void *param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar3 = (long)param_2;
  memcpy((void *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x9e8 + 0x658),param_4,0x140);
  lVar2 = *(long *)(param_1 + 0x10) + (long)param_2 * 0x9e8;
  pvVar1 = (void *)FUN_0028cb08(lVar2 + 0x110,lVar2 + 0x798,0x140);
  if (pvVar1 != (void *)0x0) {
    memcpy(pvVar1,param_4,0x140);
    lVar2 = lVar3 * 0x9e8;
    FUN_00878324(param_3,5,0,*(long *)(param_1 + 0x10) + lVar2 + 0x798,0x140);
    FUN_00878324(param_3,5,4,*(long *)(param_1 + 0x10) + lVar2 + 0x798,0x140);
    FUN_00878324(param_3,5,5,*(long *)(param_1 + 0x10) + lVar2 + 0x798,0x140);
    FUN_0028cc20(*(long *)(param_1 + 0x10) + lVar2 + 0x110);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x9e0) = 1;
  if (*(long *)(param_1 + 0x12c8) != 0) {
    local_60 = 0;
    uStack_58 = 0;
    pvVar1 = (void *)FUN_0028cb08(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110,&local_60,
                                  *(undefined8 *)(param_1 + 0x12f0));
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,*(void **)(param_1 + 0x12c8),*(size_t *)(param_1 + 0x12f0));
      FUN_00878324(param_3,0xb,0,&local_60,*(undefined8 *)(param_1 + 0x12f0));
      FUN_00878324(param_3,0xb,4,&local_60,*(undefined8 *)(param_1 + 0x12f0));
      FUN_00878324(param_3,0xb,5,&local_60,*(undefined8 *)(param_1 + 0x12f0));
      FUN_0028cc20(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110);
    }
  }
  if (*(long *)(param_1 + 0x12d0) != 0) {
    local_60 = 0;
    uStack_58 = 0;
    pvVar1 = (void *)FUN_0028cb08(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110,&local_60,
                                  *(undefined8 *)(param_1 + 0x12f8));
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,*(void **)(param_1 + 0x12d0),*(size_t *)(param_1 + 0x12f8));
      FUN_00878324(param_3,0xc,0,&local_60,*(undefined8 *)(param_1 + 0x12f8));
      FUN_00878324(param_3,0xc,4,&local_60,*(undefined8 *)(param_1 + 0x12f8));
      FUN_00878324(param_3,0xc,5,&local_60,*(undefined8 *)(param_1 + 0x12f8));
      FUN_0028cc20(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110);
    }
  }
  if (*(long *)(param_1 + 0x12d8) != 0) {
    local_60 = 0;
    uStack_58 = 0;
    pvVar1 = (void *)FUN_0028cb08(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110,&local_60,
                                  *(undefined8 *)(param_1 + 0x1300));
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,*(void **)(param_1 + 0x12d8),*(size_t *)(param_1 + 0x1300));
      FUN_00878324(param_3,0xd,0,&local_60,*(undefined8 *)(param_1 + 0x1300));
      FUN_00878324(param_3,0xd,4,&local_60,*(undefined8 *)(param_1 + 0x1300));
      FUN_00878324(param_3,0xd,5,&local_60,*(undefined8 *)(param_1 + 0x1300));
      FUN_0028cc20(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110);
    }
  }
  if (*(long *)(param_1 + 0x12e0) != 0) {
    local_60 = 0;
    uStack_58 = 0;
    pvVar1 = (void *)FUN_0028cb08(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110,&local_60,
                                  *(undefined8 *)(param_1 + 0x1308));
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,*(void **)(param_1 + 0x12e0),*(size_t *)(param_1 + 0x1308));
      FUN_00878324(param_3,0xe,0,&local_60,*(undefined8 *)(param_1 + 0x1308));
      FUN_00878324(param_3,0xe,4,&local_60,*(undefined8 *)(param_1 + 0x1308));
      FUN_00878324(param_3,0xe,5,&local_60,*(undefined8 *)(param_1 + 0x1308));
      FUN_0028cc20(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110);
    }
  }
  if (*(long *)(param_1 + 0x12e8) != 0) {
    local_60 = 0;
    uStack_58 = 0;
    pvVar1 = (void *)FUN_0028cb08(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110,&local_60,
                                  *(undefined8 *)(param_1 + 0x1310));
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,*(void **)(param_1 + 0x12e8),*(size_t *)(param_1 + 0x1310));
      FUN_00878324(param_3,0xf,0,&local_60,*(undefined8 *)(param_1 + 0x1310));
      FUN_00878324(param_3,0xf,4,&local_60,*(undefined8 *)(param_1 + 0x1310));
      FUN_00878324(param_3,0xf,5,&local_60,*(undefined8 *)(param_1 + 0x1310));
      FUN_0028cc20(*(long *)(param_1 + 0x10) + lVar3 * 0x9e8 + 0x110);
    }
  }
  return;
}


