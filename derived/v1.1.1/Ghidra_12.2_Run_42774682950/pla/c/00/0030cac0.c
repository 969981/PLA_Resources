/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030cac0; name: FUN_0030cac0
 */


void FUN_0030cac0(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  lVar3 = *param_1;
  lVar8 = param_1[1];
  if (lVar3 == lVar8) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/unknown_field_set.cc"
                 ,0x3a);
                    /* try { // try from 0030caf8 to 0030cb0b has its CatchHandler @ 0030cbe8 */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: !fields_.empty(): ");
                    /* try { // try from 0030cb0c to 0030cb13 has its CatchHandler @ 0030cbe4 */
    FUN_0030f41c(auStack_68,uVar2);
    FUN_0030f658(auStack_60);
    lVar3 = *param_1;
    lVar8 = param_1[1];
  }
  puVar1 = PTR_LAB_04373088;
  lVar8 = (lVar8 - lVar3) * 0x10000000 >> 0x20;
  lVar6 = lVar8 + -1;
  lVar8 = lVar8 * 0x10;
  lVar3 = lVar3 + lVar8;
  iVar4 = *(int *)(lVar3 + -0xc);
  if (iVar4 == 4) goto LAB_0030cb68;
LAB_0030cb48:
  lVar7 = lVar6;
  if (iVar4 != 3) goto LAB_0030cba4;
  pbVar5 = *(byte **)(lVar3 + -8);
  if (pbVar5 == (byte *)0x0) goto LAB_0030cba4;
  if ((*pbVar5 & 1) == 0) goto LAB_0030cb98;
  lVar3 = *(long *)(pbVar5 + 0x10);
  do {
    FUN_002e2ea0(puVar1,lVar3);
LAB_0030cb98:
    do {
      FUN_002e2ea0(puVar1,pbVar5);
      lVar7 = lVar6;
LAB_0030cba4:
      do {
        lVar6 = lVar7 + -1;
        if (lVar7 < 1) {
          param_1[1] = *param_1;
          return;
        }
        lVar8 = lVar8 + -0x10;
        lVar3 = *param_1 + lVar8;
        iVar4 = *(int *)(lVar3 + -0xc);
        if (iVar4 != 4) goto LAB_0030cb48;
LAB_0030cb68:
        pbVar5 = *(byte **)(lVar3 + -8);
        lVar7 = lVar6;
      } while (pbVar5 == (byte *)0x0);
      lVar3 = *(long *)pbVar5;
      if (lVar3 != *(long *)(pbVar5 + 8)) {
                    /* try { // try from 0030cb7c to 0030cb83 has its CatchHandler @ 0030cbfc */
        FUN_0030cac0(pbVar5);
        lVar3 = *(long *)pbVar5;
      }
    } while (lVar3 == 0);
    *(long *)(pbVar5 + 8) = lVar3;
  } while( true );
}


