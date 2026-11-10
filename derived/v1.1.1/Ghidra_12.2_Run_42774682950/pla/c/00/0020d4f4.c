/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d4f4; name: FUN_0020d4f4
 */


undefined8 FUN_0020d4f4(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  size_t sVar3;
  byte *pbVar4;
  long lVar5;
  void *__dest;
  size_t *psVar6;
  size_t *psVar7;
  
  if (param_3 == 0) {
    uVar1 = 0;
    *param_1 = 0;
  }
  else {
    lVar2 = 0;
    pbVar4 = (byte *)(param_2 + 0x20);
    lVar5 = param_3;
    do {
      if ((*pbVar4 >> 1 & 1) == 0) {
        lVar2 = lVar2 + *(long *)(pbVar4 + -0x10) + 1;
      }
      if ((*pbVar4 >> 2 & 1) == 0) {
        lVar2 = lVar2 + *(long *)(pbVar4 + -8) + 1;
      }
      lVar5 = lVar5 + -1;
      pbVar4 = pbVar4 + 0x28;
    } while (lVar5 != 0);
    lVar2 = FUN_0020c738(param_4,lVar2 + param_3 * 0x28);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xfffffc7b;
    }
    else {
      psVar7 = (size_t *)(lVar2 + 0x10);
      __dest = (void *)(lVar2 + param_3 * 0x28);
      psVar6 = (size_t *)(param_2 + 0x10);
      do {
        *(char *)(psVar7 + 2) = (char)psVar6[2];
        if (((byte)psVar6[2] >> 1 & 1) == 0) {
          if (*psVar6 != 0) {
            memcpy(__dest,(void *)psVar6[-2],*psVar6);
          }
          psVar7[-2] = (size_t)__dest;
          sVar3 = *psVar6;
          *psVar7 = sVar3;
          *(undefined1 *)((long)__dest + sVar3) = 0;
          FUN_00205750(psVar7[-2],*psVar7);
          __dest = (void *)((long)__dest + *psVar6 + 1);
        }
        else {
          psVar7[-2] = psVar6[-2];
          *psVar7 = *psVar6;
        }
        if (((byte)psVar6[2] >> 2 & 1) == 0) {
          if (psVar6[1] != 0) {
            memcpy(__dest,(void *)psVar6[-1],psVar6[1]);
          }
          psVar7[-1] = (size_t)__dest;
          sVar3 = psVar6[1];
          psVar7[1] = sVar3;
          *(undefined1 *)((long)__dest + sVar3) = 0;
          __dest = (void *)((long)__dest + psVar6[1] + 1);
        }
        else {
          psVar7[-1] = psVar6[-1];
          psVar7[1] = psVar6[1];
        }
        psVar6 = psVar6 + 5;
        psVar7 = psVar7 + 5;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar1 = 0;
    }
  }
  return uVar1;
}


