/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033a968; name: FUN_0033a968
 */


void FUN_0033a968(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  bVar2 = *(byte *)(param_1 + 1);
  cVar3 = *(char *)((long)param_1 + 9);
  if (0x11 < (byte)(bVar2 - 1)) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 0033a9ac to 0033a9bf has its CatchHandler @ 0033abb0 */
    uVar5 = FUN_0030f3ac(auStack_60,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0033a9c0 to 0033a9c7 has its CatchHandler @ 0033abac */
    FUN_0030f41c(auStack_68,uVar5);
    FUN_0030f658(auStack_60);
  }
  puVar4 = PTR_LAB_04373088;
  iVar1 = *(int *)(PTR_DAT_04373b08 + (ulong)bVar2 * 4);
  if (cVar3 == '\0') {
    if (iVar1 == 10) {
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)pbVar7)(pbVar7);
    }
    else {
      if (iVar1 != 9) {
        return;
      }
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      if ((*pbVar7 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar7 + 0x10));
      }
    }
  }
  else {
    switch(iVar1) {
    case 1:
    case 8:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_00326c10(pbVar7);
      break;
    case 2:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_00328710(pbVar7);
      break;
    case 3:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_00327990(pbVar7);
      break;
    case 4:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_00329490(pbVar7);
      break;
    case 5:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_0032af90(pbVar7);
      break;
    case 6:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_0032a210(pbVar7);
      break;
    case 7:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_00325e98(pbVar7);
      break;
    case 9:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      FUN_0032b6e4(pbVar7);
      break;
    case 10:
      pbVar7 = (byte *)*param_1;
      if (pbVar7 == (byte *)0x0) {
        return;
      }
      puVar6 = *(uint **)(pbVar7 + 0x10);
      if ((puVar6 != (uint *)0x0) && (*(long *)pbVar7 == 0)) {
        uVar9 = (ulong)*puVar6;
        if (0 < (int)*puVar6) {
          puVar6 = puVar6 + 2;
          puVar8 = *(undefined8 **)puVar6;
          if (puVar8 != (undefined8 *)0x0) goto LAB_0033ab44;
          while (uVar9 = uVar9 - 1, uVar9 != 0) {
            while( true ) {
              puVar6 = puVar6 + 2;
              puVar8 = *(undefined8 **)puVar6;
              if (puVar8 == (undefined8 *)0x0) break;
LAB_0033ab44:
              (**(code **)*puVar8)(puVar8);
              FUN_002e2ea0(puVar4,puVar8);
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_0033ab6c;
            }
          }
LAB_0033ab6c:
          puVar6 = *(uint **)(pbVar7 + 0x10);
        }
        FUN_002ee710(puVar6);
      }
      pbVar7[0x10] = 0;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      if (*(long *)pbVar7 != 0) {
                    /* try { // try from 0033ab80 to 0033ab83 has its CatchHandler @ 0033aba8 */
        FUN_0032ce8c();
      }
      break;
    default:
      goto switchD_0033aa00_default;
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,pbVar7);
switchD_0033aa00_default:
  return;
}


