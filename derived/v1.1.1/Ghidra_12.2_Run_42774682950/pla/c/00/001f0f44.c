/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f0f44; name: FUN_001f0f44
 */


undefined4 FUN_001f0f44(undefined8 param_1,long param_2,long *param_3)

{
  size_t __n;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_70;
  long lStack_68;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    if (*(char *)(param_2 + 0xc) != '\x04') {
      return 0;
    }
    lVar4 = param_3[0xbd];
    uVar3 = FUN_0020ba1c(param_1,3);
    *(undefined4 *)(param_3 + 0xbd) = uVar3;
    iVar2 = FUN_0020ba1c(param_1,2);
    *(bool *)((long)param_3 + 0x5ec) = iVar2 != 0;
    if ((int)lVar4 == (int)param_3[0xbd]) {
      return 0;
    }
    FUN_001f3934(*param_3,"Connection state changed (MAX_CONCURRENT_STREAMS == %u)!\n");
    *(undefined1 *)(*(long *)(*param_3 + 0xd8) + 0xf0) = 1;
    return 0;
  }
  lVar4 = FUN_0020b90c(param_1,iVar2);
  if (lVar4 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar4 + 0x1e8);
  if (lVar8 == 0) {
    return 0xfffffc7a;
  }
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 != '\x05') {
    if (cVar1 == '\x01') {
      if (*(char *)(lVar8 + 0x21c) != '\0') {
        return 0;
      }
      if (*(int *)(lVar8 + 0x238) != -1) {
        if (99 < *(int *)(lVar8 + 0x238) - 100U) {
          *(undefined1 *)(lVar8 + 0x21c) = 1;
          *(undefined4 *)(lVar8 + 0x238) = 0xffffffff;
        }
        iVar2 = FUN_001ecbe4(lVar8 + 0x220,&DAT_038a006b,2);
        if (iVar2 == 0) {
          uVar7 = (*(long **)(lVar8 + 0x220))[2] - *(long *)(lVar8 + 0x228);
          __n = *(ulong *)(lVar8 + 0x260);
          if (uVar7 <= *(ulong *)(lVar8 + 0x260)) {
            __n = uVar7;
          }
          memcpy((void *)(*(long *)(lVar8 + 600) + *(long *)(lVar8 + 0x268)),
                 (void *)(**(long **)(lVar8 + 0x220) + *(long *)(lVar8 + 0x228)),__n);
          *(size_t *)(lVar8 + 0x228) = *(long *)(lVar8 + 0x228) + __n;
          *(size_t *)(lVar8 + 0x260) = *(long *)(lVar8 + 0x260) - __n;
          *(size_t *)(lVar8 + 0x268) = *(long *)(lVar8 + 0x268) + __n;
          *(long *)(lVar4 + 0x1520) = *(long *)(lVar4 + 0x1520) + 1;
          param_3[0xbc] = param_3[0xbc] + 1;
          if (*param_3 == lVar4) {
            return 0;
          }
          FUN_001e6b54(lVar4,0,6);
          return 0;
        }
      }
      return 0xfffffc7a;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    if (*(char *)(lVar8 + 0x21c) != '\0') {
      return 0;
    }
    FUN_002123cc(param_1,0,iVar2,1);
    iVar2 = FUN_00205c60();
    if (iVar2 == 0) {
      return 0;
    }
    return 0xfffffc7a;
  }
  if (*(long *)(*(long *)(lVar4 + 0xd8) + 0x70) != 0) {
    lVar8 = FUN_001dbd4c(lVar4);
    if (lVar8 != 0) {
      lVar5 = FUN_00204504(1,0x2a0);
      if (lVar5 != 0) {
        *(long *)(lVar8 + 0x1e8) = lVar5;
        lVar6 = FUN_001ec820();
        *(long *)(lVar5 + 0x220) = lVar6;
        if (lVar6 != 0) {
          lVar5 = *(long *)(lVar8 + 0x1e8);
          *(undefined8 *)(lVar5 + 0x228) = 0;
          *(undefined1 *)(lVar5 + 0x21c) = 0;
          *(undefined4 *)(lVar5 + 0x238) = 0xffffffff;
          *(undefined8 *)(lVar5 + 0x240) = 0;
          *(undefined8 *)(lVar5 + 0x248) = 0;
          *(undefined2 *)(lVar5 + 0x250) = 0;
          *(undefined8 *)(lVar5 + 600) = *(undefined8 *)(lVar8 + 0x1130);
          *(undefined8 *)(lVar5 + 0x260) = *(undefined8 *)(lVar8 + 0xc10);
          *(undefined8 *)(lVar5 + 0x268) = 0;
          *(undefined4 *)(lVar8 + 0x1540) = *(undefined4 *)(lVar4 + 0x1540);
          lVar5 = *(long *)(lVar4 + 0x1e8);
          local_70 = lVar4;
          lStack_68 = param_2;
          if (lVar5 == 0) {
            FUN_001f3ae0(lVar4,"Internal NULL stream!\n");
          }
          else {
            FUN_001e95f0(lVar4,1);
            iVar2 = (**(code **)(*(long *)(lVar4 + 0xd8) + 0x70))
                              (lVar4,lVar8,*(undefined8 *)(lVar5 + 0x290),&local_70,
                               *(undefined8 *)(*(long *)(lVar4 + 0xd8) + 0x78));
            FUN_001e95f0(lVar4,0);
            lVar6 = *(long *)(lVar5 + 0x288);
            if (*(long *)(lVar5 + 0x290) != 0) {
              uVar7 = 0;
              do {
                FUN_002044d4(*(undefined8 *)(lVar6 + uVar7 * 8));
                uVar7 = uVar7 + 1;
                lVar6 = *(long *)(lVar5 + 0x288);
              } while (uVar7 < *(ulong *)(lVar5 + 0x290));
            }
            FUN_002044d4();
            *(undefined8 *)(lVar5 + 0x288) = 0;
            *(undefined8 *)(lVar5 + 0x290) = 0;
            lVar5 = *(long *)(lVar8 + 0x1e8);
            if (iVar2 == 0) {
              *(undefined4 *)(lVar5 + 0x218) = *(undefined4 *)(param_2 + 0x28);
              *(undefined8 *)(lVar8 + 0xf0) = 0xffffffffffffffff;
              *(undefined8 *)(lVar8 + 0xf8) = 0xffffffffffffffff;
              iVar2 = FUN_001e7b3c(*(undefined8 *)(lVar4 + 0xd8),lVar8,param_3);
              if (iVar2 == 0) {
                iVar2 = FUN_0020b928(param_3[0xaa],*(undefined4 *)(param_2 + 0x28),lVar8);
                if (iVar2 == 0) {
                  return 0;
                }
                FUN_001f3934(lVar4,"failed to set user_data for stream %d\n",
                             *(undefined4 *)(param_2 + 0x28));
                goto LAB_001f12a4;
              }
              FUN_001f3934(lVar4,"failed to add handle to multi\n");
              lVar5 = *(long *)(lVar8 + 0x1e8);
            }
            FUN_001f18e0(lVar5);
            *(undefined8 *)(lVar8 + 0x1e8) = 0;
          }
          FUN_001fc8b8(lVar8);
          goto LAB_001f12a4;
        }
        FUN_002044d4(lVar5);
      }
      FUN_001fc8b8(lVar8);
    }
    FUN_001f3934(lVar4,"failed to duplicate handle\n");
  }
LAB_001f12a4:
  uVar3 = FUN_002123cc(param_1,0,*(undefined4 *)(param_2 + 0x28),8);
  iVar2 = FUN_00205c60();
  if (iVar2 == 0) {
    return 0;
  }
  return uVar3;
}


