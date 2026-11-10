/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005add20; name: FUN_005add20
 */


ulong FUN_005add20(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  
  lVar4 = *(long *)(param_1 + 0x1230);
  uVar1 = (**(code **)(param_1 + 0x1238))
                    (*(undefined8 *)(param_1 + 0x1228),param_1,lVar4,param_2,param_3);
  if ((uVar1 != 0) && (uVar2 = FUN_002f12e0(uVar1,2,auStack_28), (uVar2 & 1) != 0)) {
    if (PTR_DAT_04374f08[0x10] != '\0') {
      uVar3 = FUN_002f1480(uVar1);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,0x30c,2,&DAT_038bd9bd,uVar3);
    }
    if (*(undefined **)(param_1 + 0x1238) == PTR_LAB_04374fb8) {
      *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fb8;
      *(long *)(param_1 + 0x1228) = param_1 + 0xfd0;
      *(undefined1 **)(param_1 + 0xfd0) = &LAB_005af170;
      *(undefined8 *)(param_1 + 0xfd8) = 0;
      *(bool *)(param_1 + 0x10a5) = *(int *)(param_1 + 0x1218) != 0;
      if (*(int *)(param_1 + 0x1218) == 0) {
        *(undefined1 *)(param_1 + 0x10a6) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x10a6) = *(undefined1 *)(param_1 + 0x1216);
      }
    }
    else {
      *(undefined1 **)(param_1 + 0x1238) = &LAB_005af230;
    }
    if (lVar4 == 0) {
      if (4 < uVar1) {
        FUN_002f0430(uVar1,
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                     ,0x315);
      }
    }
    else {
      *(ulong *)(lVar4 + 0x970) = uVar1;
      FUN_005aba00(param_1,*(undefined4 *)(param_1 + 0x1220),1,lVar4 + 0x1e8);
    }
  }
  return uVar1;
}


