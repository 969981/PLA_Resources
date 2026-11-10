/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028a2c8; name: FUN_0028a2c8
 */


undefined8 FUN_0028a2c8(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (*(char *)(*(long *)(lVar6 + 0xa0) + 0x752) == '\0') {
    lVar7 = *(long *)(*(long *)(lVar6 + 0x238) + 0x338);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x828) + 0x10))(lVar6 + 0x828,0x2c,0x80);
    uVar3 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined8 **)(*param_1 + 0x418) = puVar4;
      *(undefined4 *)puVar4 = *(undefined4 *)(lVar7 + 0x18);
      *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(lVar7 + 0x1c);
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 2) = (float)uVar2 * 2.3283064e-10;
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x14) = (float)uVar2 * 2.3283064e-10;
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 3) = (float)uVar2 * 2.3283064e-10;
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x1c) = (float)uVar2 * 2.3283064e-10;
      FUN_0026de04(*param_1,4,0x60);
      lVar6 = *param_1;
      iVar1 = (*(int *)(lVar6 + 0x230) +
              *(int *)(*(long *)(*(long *)(lVar6 + 0x238) + 0x338) + 0x10) * *(int *)(lVar6 + 0x230)
              ) * 0xa0 + 0xa0;
      if (iVar1 == 0) {
        return 1;
      }
      lVar7 = *(long *)(lVar6 + 0x418);
      uVar5 = FUN_0026de48(lVar6,*(undefined4 *)(*(long *)PTR_DAT_04373008 + 0x20),(long)iVar1);
      uVar3 = 1;
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(lVar7 + 0x20) = 1;
        return uVar3;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


