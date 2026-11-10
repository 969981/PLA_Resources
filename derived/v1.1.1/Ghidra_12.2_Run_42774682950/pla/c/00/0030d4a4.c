/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030d4a4; name: FUN_0030d4a4
 */


ulong FUN_0030d4a4(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  lVar2 = *param_1;
  if (lVar2 == param_1[1]) {
    uVar4 = 0;
LAB_0030d580:
    return uVar4 & 0xffffffff;
  }
  lVar5 = 0;
  uVar6 = 0;
  uVar4 = (param_1[1] - lVar2) + 0x18;
  iVar1 = *(int *)(lVar2 + 4);
  if (iVar1 != 4) goto LAB_0030d51c;
LAB_0030d4e4:
  iVar1 = FUN_0030d4a4(*(undefined8 *)(lVar2 + 8));
  lVar2 = uVar4 + (long)iVar1;
  do {
    uVar4 = lVar2 + 0x18;
    do {
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
      if ((ulong)(param_1[1] - *param_1 >> 4) <= uVar6) {
        if (uVar4 >> 0x1f != 0) {
          FUN_0030f640(auStack_60,3,
                       "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/message_lite.h"
                       ,0x6b);
                    /* try { // try from 0030d554 to 0030d567 has its CatchHandler @ 0030d59c */
          uVar3 = FUN_0030f3ac(auStack_60,
                               "CHECK failed: (size) <= (static_cast<size_t>(0x7fffffff)): ");
                    /* try { // try from 0030d568 to 0030d56f has its CatchHandler @ 0030d598 */
          FUN_0030f41c(auStack_28,uVar3);
          FUN_0030f658(auStack_60);
        }
        goto LAB_0030d580;
      }
      lVar2 = *param_1 + lVar5;
      iVar1 = *(int *)(lVar2 + 4);
      if (iVar1 == 4) goto LAB_0030d4e4;
LAB_0030d51c:
    } while (iVar1 != 3);
    lVar2 = FUN_0032d050(*(undefined8 *)(lVar2 + 8));
    lVar2 = uVar4 + lVar2;
  } while( true );
}


