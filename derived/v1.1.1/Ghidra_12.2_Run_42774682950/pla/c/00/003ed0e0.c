/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ed0e0; name: FUN_003ed0e0
 */


undefined8 FUN_003ed0e0(byte *param_1,ulong param_2,long param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte bVar6;
  long lVar7;
  
  if (4 < param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/b64.cc",0x94,2,
                 "assertion failed: %s","num_codes <= 4");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  switch(param_2) {
  case 1:
    pcVar5 = "Invalid group. Must be at least 2 bytes.";
    uVar4 = 0x98;
    break;
  case 2:
    bVar6 = param_1[1] >> 4 | *param_1 << 2;
    lVar7 = *param_4;
    goto LAB_003ed170;
  case 3:
    bVar6 = param_1[1];
    bVar1 = *param_1;
    lVar7 = *param_4;
    bVar2 = param_1[2];
    *param_4 = lVar7 + 1;
    *(byte *)(param_3 + lVar7) = (byte)(((uint)bVar6 << 4) >> 8) | (byte)(((uint)bVar1 << 10) >> 8);
    lVar7 = *param_4;
    bVar6 = (byte)((uint)bVar6 << 4) | bVar2 >> 2;
LAB_003ed170:
    *param_4 = lVar7 + 1;
    *(byte *)(param_3 + lVar7) = bVar6;
    return 1;
  case 4:
    bVar6 = *param_1;
    if ((bVar6 == 0x7f) || (bVar1 = param_1[1], bVar1 == 0x7f)) {
      pcVar5 = "Invalid padding detected.";
      uVar4 = 0xa7;
    }
    else {
      bVar2 = param_1[2];
      bVar3 = param_1[3];
      if (bVar2 != 0x7f) {
        if (bVar3 == 0x7f) {
          lVar7 = *param_4;
          *param_4 = lVar7 + 1;
          *(byte *)(param_3 + lVar7) =
               (byte)(((uint)bVar1 << 4) >> 8) | (byte)(((uint)bVar6 << 10) >> 8);
          lVar7 = *param_4;
          *param_4 = lVar7 + 1;
          *(byte *)(param_3 + lVar7) = (byte)((uint)bVar1 << 4) | bVar2 >> 2;
          return 1;
        }
        lVar7 = *param_4;
        *param_4 = lVar7 + 1;
        *(byte *)(param_3 + lVar7) =
             (byte)(((uint)bVar1 << 0xc) >> 0x10) | (byte)(((uint)bVar6 << 0x12) >> 0x10);
        lVar7 = *param_4;
        *param_4 = lVar7 + 1;
        *(byte *)(param_3 + lVar7) =
             (byte)(((uint)bVar2 << 6) >> 8) | (byte)(((uint)bVar1 << 0xc) >> 8);
        lVar7 = *param_4;
        *param_4 = lVar7 + 1;
        *(byte *)(param_3 + lVar7) = bVar3 | (byte)((uint)bVar2 << 6);
        return 1;
      }
      if (bVar3 == 0x7f) {
        lVar7 = *param_4;
        *param_4 = lVar7 + 1;
        *(byte *)(param_3 + lVar7) = bVar1 >> 4 | bVar6 << 2;
        return 1;
      }
      pcVar5 = "Invalid padding detected.";
      uVar4 = 0xae;
    }
    break;
  default:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/b64.cc",0xa5,2,
                 "assertion failed: %s","num_codes == 4");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/b64.cc",uVar4,2,pcVar5);
  return 0;
}


