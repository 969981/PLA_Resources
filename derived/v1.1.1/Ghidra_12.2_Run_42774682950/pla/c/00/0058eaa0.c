/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058eaa0; name: FUN_0058eaa0
 */


undefined8 FUN_0058eaa0(long *param_1,void *param_2,size_t *param_3)

{
  size_t __n;
  void *__dest;
  undefined8 uVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  size_t __n_00;
  
  if (param_3 == (size_t *)0x0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
LAB_0058ec38:
    __n_00 = 0;
    uVar1 = 0;
    goto LAB_0058ec40;
  }
  __dest = (void *)*param_1;
  if (__dest == (void *)0x0) {
LAB_0058eb28:
    __n_00 = 0;
  }
  else {
    lVar5 = param_1[2];
    if (lVar5 == 8) {
      if (param_1[4] == 0) goto LAB_0058eb28;
      uVar6 = param_1[4];
      __n_00 = 0;
LAB_0058eae4:
      __n = *param_3;
      if (uVar6 <= *param_3) {
        __n = uVar6;
      }
      memcpy(__dest,param_2,__n);
      *param_1 = *param_1 + __n;
      __n_00 = __n + __n_00;
      param_1[3] = param_1[3] + __n;
      param_1[4] = param_1[4] - __n;
    }
    else {
      __n_00 = *param_3;
      if (8U - lVar5 <= *param_3) {
        __n_00 = 8U - lVar5;
      }
      memcpy((void *)((long)param_1 + lVar5 + 8),param_2,__n_00);
      param_1[2] = param_1[2] + __n_00;
      *param_3 = *param_3 - __n_00;
      if (param_1[2] == 8) {
        uVar6 = (ulong)*(byte *)((long)param_1 + 0xb) << 0x18 |
                (ulong)*(byte *)((long)param_1 + 10) << 0x10 |
                (ulong)*(byte *)((long)param_1 + 9) << 8 | (ulong)*(byte *)(param_1 + 1);
        if ((int)uVar6 - 4U < 0xffffd) {
          uVar3 = (uint)*(byte *)((long)param_1 + 0xf) << 0x18 |
                  (uint)*(byte *)((long)param_1 + 0xe) << 0x10 |
                  (uint)*(byte *)((long)param_1 + 0xd) << 8 | (uint)*(byte *)((long)param_1 + 0xc);
          if (uVar3 == 6) {
            __dest = (void *)*param_1;
            param_2 = (void *)((long)param_2 + __n_00);
            uVar6 = uVar6 - 4;
            param_1[4] = uVar6;
            goto LAB_0058eae4;
          }
          pcVar2 = "Unsupported message type %zu (should be %zu)";
          uVar1 = 0xc0;
          uVar4 = 6;
        }
        else {
          pcVar2 = "Bad frame length (should be at least %zu, and at most %zu)";
          uVar1 = 0xb7;
          uVar3 = 4;
          uVar4 = 0x100000;
        }
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/frame_protector/frame_handler.cc"
                     ,uVar1,2,pcVar2,uVar3,uVar4);
        goto LAB_0058ec38;
      }
    }
  }
  uVar1 = 1;
LAB_0058ec40:
  *param_3 = __n_00;
  return uVar1;
}


