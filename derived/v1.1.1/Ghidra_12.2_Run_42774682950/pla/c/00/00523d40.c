/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00523d40; name: FUN_00523d40
 */


void FUN_00523d40(undefined8 param_1,void *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  void *__s;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  
  puVar2 = PTR_LAB_04373088;
  if (param_2 == (void *)0x0) {
    return;
  }
  if (param_3 != 0) {
    lVar6 = param_3;
    do {
      lVar6 = lVar6 + -1;
      pbVar7 = (byte *)((long)param_2 + lVar6 * 0x88);
      uVar3 = *(ulong *)(pbVar7 + 0x18);
      if ((uVar3 & 1) == 0) {
        __s = (void *)((long)param_2 + lVar6 * 0x88 + 0x20);
joined_r0x00523dc0:
        if (uVar3 >> 1 != 0) {
          uVar4 = uVar3 >> 1;
          lVar5 = (long)__s + uVar4 * 0x68 + -0x30;
          do {
            FUN_00523c98(lVar5 + 0x18);
            FUN_003e9f80(lVar5,*(undefined8 *)(lVar5 + 8));
            if ((*(byte *)(lVar5 + -0x18) & 1) == 0) {
              bVar1 = *(byte *)(lVar5 + -0x38);
            }
            else {
              FUN_002e2ea0(puVar2,*(undefined8 *)(lVar5 + -8));
              bVar1 = *(byte *)(lVar5 + -0x38);
            }
            if ((bVar1 & 1) != 0) {
              FUN_002e2ea0(puVar2,*(undefined8 *)(lVar5 + -0x28));
            }
            uVar4 = uVar4 - 1;
            lVar5 = lVar5 + -0x68;
          } while (uVar4 != 0);
        }
        memset(__s,0xab,(uVar3 >> 1) * 0x68);
        if ((*(ulong *)(pbVar7 + 0x18) & 1) != 0) goto LAB_00523e54;
        bVar1 = *pbVar7;
      }
      else {
        __s = *(void **)((long)param_2 + lVar6 * 0x88 + 0x20);
        if (__s != (void *)0x0) goto joined_r0x00523dc0;
LAB_00523e54:
        FUN_002e2ea0(puVar2,*(undefined8 *)((long)param_2 + lVar6 * 0x88 + 0x20));
        bVar1 = *pbVar7;
      }
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar2,*(undefined8 *)((long)param_2 + lVar6 * 0x88 + 0x10));
      }
    } while (lVar6 != 0);
  }
  memset(param_2,0xab,param_3 * 0x88);
  return;
}


