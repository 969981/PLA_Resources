/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030aeb0; name: FUN_0030aeb0
 */


void FUN_0030aeb0(void *param_1)

{
  long lVar1;
  void *__ptr;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_c0 [128];
  
  lVar1 = (long)param_1 + 0x18;
  FUN_002ef750(lVar1);
  if (*(char *)((long)param_1 + 0x48) != '\x01') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_posix.cc",0x9c,2,
                 "assertion failed: %s","s->shutdown");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)((long)param_1 + 0x50);
  if (lVar3 != 0) {
    do {
      FUN_002fe920(lVar3 + 0x18);
      *(undefined1 **)(lVar3 + 0xf8) = &LAB_0030afa0;
      *(void **)(lVar3 + 0x100) = param_1;
      *(undefined8 *)(lVar3 + 0x108) = 0;
      *(undefined2 *)(lVar3 + 0x110) = 0;
      *(undefined8 *)(lVar3 + 0x128) = 0;
      *(undefined4 *)(lVar3 + 0x130) = 0;
      *(char **)(lVar3 + 0x118) =
           "external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_posix.cc";
      *(undefined4 *)(lVar3 + 0x120) = 0xa3;
      FUN_002f9530(*(undefined8 *)(lVar3 + 8),lVar3 + 0xf0,0,"tcp_listener_shutdown");
      lVar3 = *(long *)(lVar3 + 0x138);
    } while (lVar3 != 0);
    FUN_002ef790(lVar1);
    return;
  }
  FUN_002ef790(lVar1);
  lVar1 = (long)param_1 + 0x18;
  FUN_002ef750(lVar1);
  if (*(char *)((long)param_1 + 0x48) != '\x01') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_posix.cc",0x74,2,
                 "assertion failed: %s","s->shutdown");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ef790(lVar1);
  if (*(long *)((long)param_1 + 0x78) != 0) {
    FUN_002f019c(auStack_c0 + 0x90,*(long *)((long)param_1 + 0x78),0);
  }
  FUN_002ef710(lVar1);
  __ptr = *(void **)((long)param_1 + 0x50);
  while (__ptr != (void *)0x0) {
    *(undefined8 *)((long)param_1 + 0x50) = *(undefined8 *)((long)__ptr + 0x138);
    free(__ptr);
    __ptr = *(void **)((long)param_1 + 0x50);
  }
  FUN_002e4a10(*(undefined8 *)((long)param_1 + 0x90));
  puVar2 = *(undefined8 **)((long)param_1 + 0x98);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  free(param_1);
  return;
}


